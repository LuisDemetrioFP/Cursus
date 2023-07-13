/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:42:46 by luis-fer          #+#    #+#             */
/*   Updated: 2023/04/20 16:55:04 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int a = 5;
	int nona = 130 ;

	printf("%d\n" "%d\n", a, ft_isascii(a));
	printf("%d\n" "%d\n", nona, ft_isascii(nona));
}*/