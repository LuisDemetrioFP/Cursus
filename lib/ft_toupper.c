/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:01:52 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/07 15:58:03 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
	{
		chr -= 32;
	}
	return (chr);
}

/*int main()
{
	int inpt;

	inpt = 'a';
	printf("Funcion interna: %c\n", toupper((char)inpt));
	printf("Funcion creada: %c\n ", ft_toupper((char)inpt));
}*/