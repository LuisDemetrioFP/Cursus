/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:31:14 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/14 12:36:45 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

/*int main() {
    char str1[] = "Cuarentaydos";
    char str2[] = "Cuarenta";
    
    int result = memcmp(str1, str2, 9);
    
    if (result < 0) {
        printf("str1 es menor que str2\n");
    } else if (result > 0) {
        printf("str1 es mayor que str2\n");
    } else {
        printf("str1 y str2 son iguales\n");
    }
    
    return (0);
}*/