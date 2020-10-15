# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/25 20:44:04 by fulldemo          #+#    #+#              #
#    Updated: 2019/09/25 21:06:02 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFIXES: .o .c
.c.o:
	$(CC) -c $(CFLAGS) $<

# Macros

CC = gcc
SRC = main.c creator.c passint.c result.c
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

# Reglas explícitas

all :
	$(CC) $(CFLAGS) -o BSQ ${SRC}

clean:
		$(RM) BSQ

