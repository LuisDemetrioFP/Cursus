/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:03:30 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/16 11:49:35 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *str)
{
    int num;
    int sign;
    int i;

    i = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;

    sign = 1;
    if (str[i] == '+' || str[i] == '-')
        sign = (str[i++] == '-') ? -1 : 1;

    num = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        int digit;

        digit = str[i] - '0';
        num = num * 10 + digit;
        i++;
    }

    return sign * num;
}

int main()
{
    const char *str = "+42";

    int ft_result = ft_atoi(str);
    int result = atoi(str);
    
    printf("El resultado de ft_atoi es: %d\n", ft_result);
    printf("El resultado de atoi es: %d\n", result);
    
    return 0;
}