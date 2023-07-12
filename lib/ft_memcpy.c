/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:49:53 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/09 10:14:29 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char		*dst;
	unsigned const char	*str;
	size_t		i;

	dst = dest;
	str = src;
	i = 0;
	/*if (!dst && !str)
		return (0);*/
	while (i < num)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}

int main() 
{
    char src[0];
    char dest[10];

    ft_memcpy(dest, src, 0);

    printf("dest: %s\n", dest);

    return 0;
}