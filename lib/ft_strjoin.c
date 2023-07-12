/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 09:10:29 by demews2l          #+#    #+#             */
/*   Updated: 2023/07/05 12:41:03 by demews2l         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	size_t	len_1;
	size_t	len_2;
	size_t				i;

    if (!s1 && !s2)
	    return (0);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	i = 0;
	s3 = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!s3)
		return (0);
	while (i < len_1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_2)
		s3[len_1++] = s2[i++];
	s3[len_1] = '\0';
	return (s3);
}

int main()
{
    const char *str1 = "Cuarenta";
    const char *str2 = " y dos";
    char *result = ft_strjoin(str1, str2);

    if (result != NULL)
    {
        printf("String concatenado: %s\n", result);
        free(result);
    }
    else
    {
        printf("La reserva de memporia a fallado.\n");
    }

    return 0;
}