/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:17:46 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/05 12:38:13 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	const char	*str;
	char		*temp;
	size_t		i;

	temp = (char *)dest;
	str = (char *)src;
	if (temp == str)
		return (dest);
	if (temp < str)
		while (num--)
			temp[num] = str[num];
	else 
	{
		i = num;
		while (i > 0)
		{
			temp[i - 1] = str[i - 1];
			i--;
		}
	}
	return (dest);
}

/*int main() 
{
    char src[20] = "cuarentaydos";
    char dest[20] = "42";

    ft_memmove(dest, src, 12);
    printf("ft dest: %s\n", dest);
    memmove(dest, src, 12);
    printf("dest: %s\n", dest);

    return 0;
}*/