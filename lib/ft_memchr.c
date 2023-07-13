/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:26:26 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/19 11:29:25 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}

/*int main()
{
    char str[] = "cuarentaydos";
    int c = 'd';
    int n = 12;

    char *result = ft_memchr(str, c, n);
    if (result != NULL)
    {
        printf("Se encontró una coincidencia: %c\n", *result);
    }
    else
    {
        printf("No se encontró ninguna coincidencia.\n");
    }

    return 0;
}*/