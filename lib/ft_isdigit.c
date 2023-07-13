/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:54:04 by luis-fer          #+#    #+#             */
/*   Updated: 2023/04/19 13:09:55 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int n = '5';
	char non = 'a';


	printf("%d\n" "%d\n", n, ft_isdigit(n));
	printf("%d\n" "%d\n", non, ft_isdigit(non));
}*/