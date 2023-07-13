/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:10:49 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/04 10:49:49 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

char	my_function(unsigned int index, char c)
{
	return c + index;
}

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !f || !result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char *s = "cuarentaydos";
	char *result = ft_strmapi(s, &my_function);

	if (result)
	{
		printf("Original: %s\n", s);
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al aplicar ft_strmapi.\n");
	}

	return 0;
}*/