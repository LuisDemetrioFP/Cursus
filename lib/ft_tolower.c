/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:22:02 by luis-fer          #+#    #+#             */
/*   Updated: 2023/06/07 15:58:57 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
	{
		chr += 32;
	}
	return (chr);
}

int main()
{
	int inpt;

	inpt = 'A';
	printf("Funcion interna: %c\n", tolower(inpt));
	printf("Funcion creada: %c\n ", ft_tolower(inpt));
}