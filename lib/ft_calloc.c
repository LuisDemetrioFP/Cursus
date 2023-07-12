/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demews2l <demews2l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:51:02 by demews2l          #+#    #+#             */
/*   Updated: 2023/06/17 17:18:47 by demews2l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num--)
		*ptr++ = '\0';
}

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, element_size * num_elements);
	return (ptr);
}

void print_array(int *arr, size_t size)
{
    if (size == 0)
        return;

    printf("%d ", *arr);
    print_array(arr + 1, size - 1);
}

int main()
{
    int *numbers;
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    numbers = ft_calloc(num_elements, element_size);
    if (numbers == NULL)
    {
        printf("La asignación de memoria ha fallado.\n");
        return 1;
    }

    printf("La memoria se ha asignado correctamente.\n");

    printf("Elementos del arreglo: ");
    print_array(numbers, num_elements);
    printf("\n");

    free(numbers);

    return 0;
}