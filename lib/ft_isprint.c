/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:43:50 by luis-fer          #+#    #+#             */
/*   Updated: 2023/04/22 16:54:58 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main(void)
{
	int in = 5;
	char i = 'a';
	int noni = 130;

	printf("%d\n" "%d\n", in, ft_isprint(in));
	printf("%d\n" "%d\n", i, ft_isprint(i));
	printf("%d\n" "%d\n", noni, ft_isprint(noni));
}*/