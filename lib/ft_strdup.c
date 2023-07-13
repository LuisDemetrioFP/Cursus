/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:19:51 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/30 09:33:42 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

int ft_strlen (const char *c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size) 
{
	size_t    i;

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
	return ft_strlen(src);
}

char	*ft_strdup(const char *s)
{
	size_t len;
	char *dup;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (dup != 0)
		ft_strlcpy(dup, s, len);
	return dup;
}

/*int	main()
{
    const char *str = "cuarentaydos";
    char *str_dup = ft_strdup(str);

    if (str_dup != NULL)
    {
        printf("Cadena original: %s\n", str);
        printf("Cadena duplicada: %s\n", str_dup);

        free(str_dup);
    }
    else
    {
        printf("La asignación de memoria ha fallado.\n");
    }

    return 0;
}*/