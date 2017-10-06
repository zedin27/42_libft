# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 18:13:08 by ztisnes           #+#    #+#              #
#    Updated: 2017/10/06 02:35:37 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Compilation
CC      = gcc

#Running the extra errors
CFLAGS  = -Wall -Wextra -Werror

#Archive
AR      = ar rc

#Run the Library
RANLIB  = ranlib

NAME    = libft.a

HEADER  = libft.h

SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strcat.c ft_strnew.c ft_strdup.c ft_strcmp.c ft_strcpy.c\
ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncpy.c ft_strnstr.c \
ft_strstr.c ft_tolower.c ft_toupper.c

OBJS    = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o \
ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o \
ft_strcat.o ft_strnew.o ft_strdup.o ft_strcmp.o ft_strcpy.o\
ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncpy.o ft_strnstr.o \
ft_strstr.o ft_tolower.o ft_toupper.o

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)
		@echo "[INFO] Library [$(NAME)] created!"

clean:
		@rm -f $(OBJS)
		@echo "[INFO] Objects removed!"

fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] Library [$(NAME)] removed!"

re:		fclean all

.PHONY: all, clean, fclean, re
