/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:22:30 by luis-fer          #+#    #+#             */
/*   Updated: 2024/06/27 12:52:08 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*update_and_free_stack(char *stack)
{
	int		i;
	int		stack_len;
	char	*stack_new;

	i = 0;
	while (stack[i] != '\n' && stack[i])
		i++;
	if (stack[i] == '\0')
	{
		free(stack);
		return (NULL);
	}
	stack_len = ft_strlen(stack);
	stack_new = malloc((stack_len - i) * sizeof(char));
	if (!stack_new)
	{
		free(stack);
		return (NULL);
	}
	ft_strlcpy(stack_new, stack + i + 1, stack_len - i);
	free(stack);
	return (stack_new);
}

char	*new_line(char *stack)
{
	char	*line;
	int		i;

	if (!stack || !*stack)
		return (NULL);
	i = 0;
	while (stack[i] != '\n' && stack[i])
		i++;
	if (stack[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	ft_strlcpy(line, stack, i + 1);
	return (line);
}

char	*read_and_join(int fd, char *stack)
{
	char	*buffer;
	int		read_fd;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(stack), free(buffer), NULL);
	read_fd = 1;
	while (read_fd != 0 && !(ft_strchr(stack, '\n')))
	{
		read_fd = read(fd, buffer, BUFFER_SIZE);
		if (read_fd < 0)
			return (free(stack), free(buffer), NULL);
		buffer[read_fd] = '\0';
		stack = ft_strjoin(stack, buffer);
		if (!stack)
		{
			free(stack);
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	return (stack);
}

char	*get_next_line(int fd)
{
	static char	*stack[4096];
	char		*line;

	if (BUFFER_SIZE <= 0)
	{
		if (fd >= 0 && stack[fd])
		{
			free(stack[fd]);
			stack[fd] = NULL;
		}
		return (NULL);
	}
	stack[fd] = read_and_join(fd, stack[fd]);
	line = new_line(stack[fd]);
	if (!line)
	{
		free(stack[fd]);
		stack[fd] = NULL;
		return (NULL);
	}
	stack[fd] = update_and_free_stack(stack[fd]);
	return (line);
}
