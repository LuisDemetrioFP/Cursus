/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 09:56:56 by demews2l          #+#    #+#             */
/*   Updated: 2023/07/05 13:03:45 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	digit_counter(int n)
{
	int copy;
    int count;

	copy = n;
	count = 0;
    if (n == 0)
        return 1;
    if (n == -2147483648)
        return 11;
    if (n < 0)
        return digit_counter(-n) + 1;
    while (copy > 0)
    {
        copy /= 10;
        count++;
    }
    return count;
}

int	exp_counter(int n)
{
	int digits;
	int exp;

    exp = 1;
    if (n == 0)
        return 1;
    if (n == -2147483648)
    {
        return 1000000000;
    }
	digits = digit_counter(n);
    if (n < 0)
        digits--;
    while (--digits)
        exp *= 10;
    return exp;
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	str = malloc(digit_counter(n) + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i++] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
    int num = -0;
    char *str = ft_itoa(num);

    if (str)
    {
        printf("Número: %d\n", num);
        printf("Cadena: %s\n", str);
        free(str);
    }
    else
    {
        printf("Error al convertir el número.\n");
    }

    return 0;
}
