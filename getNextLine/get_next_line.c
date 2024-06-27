/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:50:33 by luis-fer          #+#    #+#             */
/*   Updated: 2024/06/27 13:24:22 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*stack;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stack)
		{
			free(stack);
			stack = (NULL);
		}
		return (NULL);
	}
	stack = read_and_join(fd, stack);
	line = new_line(stack);
	if (!line)
	{
		free(stack);
		stack = NULL;
		return (NULL);
	}
	stack = update_and_free_stack(stack);
	return (line);
}
