/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:49:53 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/25 10:14:29 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
	/*if (!dst && !str)
		return (0);*/

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char		*dst;
	unsigned const char	*str;
	size_t				i;

	dst = dest;
	str = src;
	i = 0;
	while (i < num)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}

/*int main() 
{
    char src[20] = "CUARENTAYDOS";
    char dest[20] = "cuarentaydos";

    ft_memcpy(dest, src, 5);

    printf("dest: %s\n", dest);

    return 0;
}*/