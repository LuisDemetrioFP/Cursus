# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luis-fer <luis-fer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 18:24:17 by luis-fer          #+#    #+#              #
#    Updated: 2023/04/18 16:34:26 by luis-fer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#almacena el nombre del archivo de biblioteca resultante.
NAME = libft.a

#establece el compilador utilizado, en este caso, "gcc".
CC = gcc

#establece las banderas de compilación para generar advertencias (-Wall y -Wextra)
#y tratar las advertencias como errores (-Werror).
CFLAGS = -Wall -Wextra -Werror

#contiene la lista de archivos fuente (.c) necesarios para compilar la biblioteca.
FILES = 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

#lista de archivos objeto (.o) correspondientes a los archivos fuente. 
#La función de sustitución de patrones se utiliza para reemplazar la extensión .c por .o en cada archivo fuente.
OBJS	= 	$(FILES:.c=.o)

#define la regla "all" que depende del archivo creado en "NAME".
#Esta regla indica que el objetivo predeterminado es construir el archivo especificado en "NAME".
all: $(NAME)

#define la regla "all"
#Utiliza el comando "ar" para crear el archivo de biblioteca ".a" utilizando los archivos objeto.
$(NAME): $(OBJS)
	$(AR) -rcs $@ $^

#Esta regla establece cómo se generan los archivos objeto ".o" a partir de los archivos fuente ".c".
#Utiliza el compilador especificado en "CC" y las banderas de compilación en "CFLAGS" para compilar cada archivo fuente individualmente.
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

#La regla "clean" elimina los archivos objeto
clean:
	rm -f $(OBJS)

#La regla "fclean" depende de la regla "clean" y se encarga de eliminar tanto los archivos objeto como el archivo de biblioteca especificado en "NAME".
fclean: clean
	rm -f $(NAME)

#La regla "re" depende de las reglas "fclean" y "all".
#Esta regla realiza una reconstrucción completa del proyecto, primero eliminando todos los archivos generados anteriormente y luego construyéndolos nuevamente.
re: fclean all

#indica que las reglas "all", "clean", "fclean" y "re" no se corresponden con archivos reales, por lo que se marcan como "phony".
#Esto evita problemas si hay algún archivo con el mismo nombre que alguna de las reglas.
.PHONY: all clean fclean re


