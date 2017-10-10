# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 18:13:08 by ztisnes           #+#    #+#              #
#    Updated: 2017/10/09 04:56:34 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

NAME    = libft.a
HEAD    = libft.h

SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_striteri.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c ft_strrchr.c \
ft_strcat.c ft_strnew.c ft_strchr.c ft_strdup.c ft_strcmp.c ft_strcpy.c\
ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strncmp.c \
ft_strstr.c ft_tolower.c ft_toupper.c ft_striter.c ft_strmap.c ft_strmapi.c \
ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strtrim.c \
ft_iswhitespace.c ft_strsplit.c ft_putchar_fd.c ft_strsplit.c ft_wordcount.c \
ft_wordlength.c ft_memdel.c ft_memalloc.c ft_putendl_fd.c ft_putendl.c \
ft_putstr.c ft_putstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_strclr.c ft_strdel.c \
ft_strequ.c ft_strnequ.c ft_itoa.c ft_itoa_base.c ft_lstdelone.c ft_lstnew.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJS    = $(SRCS:.c=.o)

.PHONY: all, clean, fclean, re

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
