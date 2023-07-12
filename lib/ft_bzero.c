/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:59:43 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/09 09:46:01 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


void	ft_bzero(void *s, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num--)
		*ptr++ = '\0';
}

int main()
{
    char str []  = "cuarentaydos";

    ft_bzero(str, 0);

    //bzero(str, -1);
    printf("str: %s\n", str); 

    return 0;
}