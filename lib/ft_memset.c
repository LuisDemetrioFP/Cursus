/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:05:17 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/07 16:49:37 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *ptr, int val, size_t num)
{
	unsigned char *mem;

    mem = (unsigned char *)ptr;
	while (num--)
		*mem++ = (unsigned char)val;
	
	return ptr;
}

int main()
{
    char str []  = "cuarentaydos";

    ft_memset(str, 'a', 4);

    printf("str: %s\n", str); 

    return 0;
}