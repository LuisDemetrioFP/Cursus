/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:52:02 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/03 11:05:17 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/

void	my_function(unsigned int index, char *c)
{
	*c = *c + index;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char s[] = "cuarentaydos";

	printf("Antes: %s\n", s);
	ft_striteri(s, &my_function);
	printf("Después: %s\n", s);

	return 0;
}*/