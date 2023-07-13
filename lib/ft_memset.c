/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:05:17 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/12 16:49:37 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*mem;

	mem = (unsigned char *)ptr;
	while (num--)
		*mem++ = (unsigned char)value;
	return (ptr);
}

/*int main()
{
    char str []  = "cuarentaydos";

    ft_memset(str, 0 , 4);

    printf("str: %s\n", str); 

    return 0;
}*/