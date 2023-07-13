/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:43:40 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/28 08:23:39 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int ft_strlen (const char *c)
{
    int i;

    i = 0;
    while(c[i] != '\0')
    {
        i++;
    }
    return (i);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			str_len;

	if (!s)
		return (str = malloc(0));
	str_len = ft_strlen(s);
	i = 0;
	if (len == str_len && start < len)
		str = malloc((len - start) + 1);
	if (len > str_len)
		str = malloc(str_len + 1);
	if (len < str_len)
		str = malloc(len + 1);
	if ((start > str_len))
		return (str = malloc(0));
	while (len-- && s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
    const char *str = "Cuarentaydos";
    unsigned int start = 0;
    size_t len = 16;

    char *substring = ft_substr(str, start, len);
    if (substring != 0)
    {
        printf("Original String: %s\n", str);
        printf("Substring: %s\n", substring);
        free(substring);
    }
    else
    {
        printf("Failed to create substring.\n");
    }

    return 0;
}*/