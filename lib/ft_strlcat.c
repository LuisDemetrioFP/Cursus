/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:12:32 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/06 17:08:56 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
#include <stddef.h>*/

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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;	

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
	{
		return (size + len_s);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1) - len_d)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

/*int main()
{
    char dest[20]= "cuarenta";
    char src[20] = "ydos";
    int num_s = 20;

    //ft_strlcat(dest, src, num_s);
    printf("%lu\n Cadena: %s\n", ft_strlcat(dest, src, num_s), dest);
    //strlcat(dest, src, num_s);
    //printf("Cadena: %s\n", dest);
    //printf("%u\n", strlcat(dest, src, num_s), dest);

    return 0;
}*/
