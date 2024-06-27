/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:45:10 by luis-fer          #+#    #+#             */
/*   Updated: 2024/06/20 11:46:53 by luis-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    int fd;
	int fd2;
	int fd3;
    char *line;

    // Abre el archivo para leer
	fd = open( "sometext.txt" , O_RDONLY);
	fd2 = open( "sometext1.txt" , O_RDONLY);
	fd3 = open( "sometext2.txt" , O_RDONLY);

    // Lee y muestra cada línea del archivo
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line); // Libera la memoria asignada por get_next_line
    }
	printf("\n");
    while ((line = get_next_line(fd2)) != NULL)
    {
        printf("%s", line);
        free(line); // Libera la memoria asignada por get_next_line
    }
	printf("\n");
	    while ((line = get_next_line(fd3)) != NULL)
    {
        printf("%s", line);
        free(line); // Libera la memoria asignada por get_next_line
    }
    // Cierra el archivo
    close(fd);
	close(fd2);
	close(fd3);
    return 0;
}
