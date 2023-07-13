/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:21:37 by luis-fer          #+#    #+#             */
/*   Updated: 2023/04/21 11:38:48 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int n = 5;
	char chu = 'a';
	char chl = 'A';

	printf("%d\n" "%d\n", n, ft_isaplha(n));
	printf("%d\n" "%d\n", chu, ft_isaplha(chu));
	printf("%d\n" "%d\n", chl, ft_isaplha(chl));
}*/