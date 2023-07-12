/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:27:52 by luis-fer          #+#    #+#             */
/*   Updated: 2023/07/05 12:33:46 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función isalnum() toma como argumento un carácter representado por su valor ASCII y devuelve un valor entero.
Retorna un valor diferente de cero si el carácter es una letra del alfabeto o un dígito numérico, y devuelve cero si no lo es*/

/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	char n = '5';
	char chu = 'a';
	char chl = 'A';
	char chnon = '/';

	printf("%d\n" "%d\n", n, ft_isalnum(n));
	printf("%d\n" "%d\n", chu, ft_isalnum(chu));
	printf("%d\n" "%d\n", chl, ft_isalnum(chl));
	printf("%d\n" "%d\n", chnon, ft_isalnum(chnon));
}*/