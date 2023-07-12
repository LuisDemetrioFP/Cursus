/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:38:16 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/07 15:30:54 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


size_t ft_strlen(const char *c)
{	
	size_t i = 0;

    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}

char	*ft_strrchr(const char *s, int c)
{
	char	*c_lst;

	c_lst = 0;

	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			c_lst = (char *)s;
		s++;
	}
	return (c_lst);
}

int main ()
{
	char str [] = "cuarentaydos";
	int chr = 'a';

	printf("%s\n", ft_strrchr(str, chr));
	printf("%s\n", strrchr(str, chr));
}