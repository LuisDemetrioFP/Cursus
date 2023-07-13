/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:27:50 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/07 15:24:31 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}

/*int main(void)
{
	char str [] = "cuarentaydos";
	int chr = 'a';

	printf("%s\n", ft_strchr(str, chr));
	printf("%s\n", strchr(str, chr));
}*/
