# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mroux <mroux@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:32:17 by mroux             #+#    #+#              #
#    Updated: 2015/02/19 16:18:16 by mroux            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftasm.a

EXECUTE = asm_main

CFLAGS = -Wextra -Werror -Wall

SRC = main.c

OBJ = main.o

I = libftasm.h

LIBSRCS = ft_bzero.s ft_isalnum.s ft_isalpha.s ft_isascii.s ft_isdigit.s ft_tolower.s ft_toupper.s ft_isprint.s ft_puts.s ft_strcat.s ft_strlen.s ft_memset.s ft_memcpy.s ft_strdup.s ft_putstr.s ft_cat.s ft_isspace.s ft_ishastag.s \

LIBOBJ = $(LIBSRCS:.s=.o)

GCC = gcc

NASM = nasm

FLAG = -f macho64

all: $(NAME)

$(NAME): $(LIBOBJ)
	$(GCC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(LIBOBJ)
	$(GCC) -o $(EXECUTE) $(NAME) $(OBJ) -I $(I)

%.o: %.s
	$(NASM) $(FLAG) $<

clean:
	/bin/rm -f $(OBJ) $(LIBOBJ)

fclean: clean
	/bin/rm -f $(NAME) $(EXECUTE)

re: fclean all

.PHONY: fclean clean all
