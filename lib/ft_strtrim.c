/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:07:03 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/27 10:32:43 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

size_t ft_strlcpy(char *dst, const char *src, size_t size) 
{
  size_t    i;

  i = 0;
  if (size > 0) {
    while (src[i] != '\0' && i < size - 1) {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
}
{
    return ft_strlen(src);
}
}

char *ft_strdup(const char *s)
{
    size_t len;
    char *dup;

    len = ft_strlen(s) + 1; // Longitud de la cadena más el carácter nulo
    dup = malloc(len); // Asignar memoria para la cadena duplicada
    if (dup != 0)
    {
        ft_strlcpy(dup, s, len); // Copiar el contenido de la cadena original a la duplicada
    }

    return dup;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *str;
    unsigned int    i;
    unsigned int    str_len;
    
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

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    
    start = 0;
    end = ft_strlen(s1);
    if (s1 == 0)
        return 0;
    if (set == 0)
        return ft_strdup(s1);
    
    while (s1[start] != '\0' && ft_strrchr(set, s1[start]) != 0)
        start++;
    while (end > start && ft_strrchr(set, s1[end - 1]) != 0)
        end--;
    
    if (start >= end)
        return ft_strdup("");
    
    return ft_substr(s1, start, end - start);
}

int main()
{
    char *s1 = "CuarentaydosCuanteaC";
    char *set = "Cuarenta";
    char *trimmed = ft_strtrim(s1, set);

    printf("Original: \"%s\"\n", s1);
    printf("Trimmed:  \"%s\"\n", trimmed);

    // Liberar la memoria asignada por ft_strtrim
    free(trimmed);

    return 0;
}