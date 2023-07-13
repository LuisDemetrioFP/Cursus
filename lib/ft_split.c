/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:33:25 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/05 12:54:19 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

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

static int	count_words(const char *str, char c)
{
	int count = 0;
	int is_word = 0;

	while (*str)
	{
		if (*str != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (*str == c)
			is_word = 0;
		str++;
	}

	return count;
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return NULL;
	int word_count;
	char **split;

	word_count = count_words(s, c);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return NULL;
	int i = 0;
	const char *start;

	i = 0;
	start = s;
	while (*s)
		if (*s++ == c)
		{
			if (s - start > 1)
				split[i++] = ft_substr(start, 0, s - start - 1);
			start = s;
		}
	if (s - start > 0)
		split[i++] = ft_substr(start, 0, s - start);
	split[i] = NULL;
	return split;
}

/*int main(void)
{
	char *str = "Cuarenta y dos es lo mejor que hay";
	char **split = ft_split(str, ' ');
	int i = 0;
	
	if (split)
	{
		while (split[i])
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}

	return 0;
}*/