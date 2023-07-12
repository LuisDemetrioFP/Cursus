/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:40:30 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/15 13:35:36 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	i = 0;
    while (str1[i] && str2[i] && i < n)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    
    if (i == n)
        return (0);
    
    return str1[i] - str2[i];
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hell";
    
    int result = ft_strncmp(str1, str2, 0);
    
    if (result < 0) {
        printf("str1 es menor que str2\n");
    } else if (result > 0) {
        printf("str1 es mayor que str2\n");
    } else {
        printf("str1 y str2 son iguales\n");
    }
    
    return 0;
}