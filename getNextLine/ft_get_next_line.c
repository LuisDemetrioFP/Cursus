/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:27:06 by luis-fer          #+#    #+#             */
/*   Updated: 2024/04/23 09:47:04 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line.h"

char	*create_line(char *stack)
{
	char	*line;
	int		i;

	if (!stack || !*stack)
		return (NULL);
	i = 0;
	while (stack[i] != '\n' && stack[i])
		i++;
	line = malloc(sizeof(char) * (i + 2)); // +2 para el '\n' y el '\0'
	if (!line)
		return (NULL);
	i = 0;
	while (stack[i] && stack[i] != '\n')
	{
		line[i] = stack[i];
		i++;
	}
	line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*update_stack(char *stack)
{
	char	*aux;
	char	*p;

	p = ft_strchr(stack, '\n');
	if (!p)
	{
		free(stack);
		return (NULL);
	}
	aux = ft_strdup(p + 1);
	free(stack);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*stack = NULL;
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		read_bytes;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	read_bytes = 1;
	while (!(ft_strchr(stack, '\n')) && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			return (free(stack), stack = NULL, NULL);
		buffer[read_bytes] = '\0';
		stack = join_and_free(stack, buffer);
		if (!stack)
			return (NULL);
	}

	line = create_line(stack);
	stack = update_stack(stack);

	return (line);
}
