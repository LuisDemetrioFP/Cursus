/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:02:02 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/07 15:20:55 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>  // strncpy*/

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int main() {
  char destino[] = "Fernandez";
  char source[] = "Luis";
  //strncpy(temporal, nombre, 1);
  //printf("Nativa: Nombre: %s Temporal: %s \n", nombre, temporal);
  ft_strlcpy(destino, source, 4);
  printf("Creada: destino: %s source: %s", destino, source);
  return 0;
}*/