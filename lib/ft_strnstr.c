/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:36:09 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/05 12:39:25 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <stddef.h>*/

int ft_strlen (const char *c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return (char *)haystack;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return (char *)haystack;
		haystack++;
		len--;
	}
	return (0);
}

/*int main() {
    const char *haystack = "cuarenta y dos";
    const char *needle = " ";

    char *result = ft_strnstr(haystack, needle, 11);
    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result);
    } else {
        printf("Subcadena no encontrada\n");
    }

    return 0;
}*/