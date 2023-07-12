/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:17:46 by demews2l          #+#    #+#             */
/*   Updated: 2023/07/05 12:38:13 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//compara dest y src porque a diferencia de memcpy puede solapar areas de mem.
//pero la comparacion me hace irme de las 25 lineas...

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	const char	*str;
	char	*temp;
	size_t	i;

	temp = (char *)dest;
	str = (char *)src;
    if (temp == str)
        return dest;

    if (temp < str)
    {
        i = 0;
        while (i < num)
        {
            temp[i] = str[i];
            i++;
        }
    }
    else
    {
        i = num;
        while (i > 0)
        {
            temp[i - 1] = str[i - 1];
            i--;
        }
    }
    return dest;
}

int main() 
{
    char src[] = "cuan";
    char dest[] = "hola";

    ft_memmove(dest, src, 4);
    printf("ft dest: %s\n", dest);
    memmove(dest, src, 4);
    printf("dest: %s\n", dest);

    return 0;
}