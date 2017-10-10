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

CC		= gcc
FLAGS	= -Wall -Wextra -Werror
AR		= ar rc
RANLIB	= ranlib

NAME	= libft.a
HEAD	= libft.h

SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_iswhitespace.c ft_itoa_base.c ft_itoa.c \
ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putnedl_fd.c ft_putendl.c \
ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striter.c \
ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtok.c ft_strtrim.c ft_tolower.c \
ft_toupper.c ft_wordcount.c ft_wordlength.c

OBJS	= ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_iswhitespace.o ft_itoa_base.o ft_itoa.o \
ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o \
ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
ft_memset.o ft_putchar_fd.o ft_putchar.o ft_putnedl_fd.o ft_putendl.o \
ft_putstr_fd.o ft_putstr.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o \
ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striter.o \
ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtok.o ft_strtrim.o ft_tolower.o \
ft_toupper.o ft_wordcount.o ft_wordlength.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc libft.a $(OBJS)
	ranlib libft.a

clean:
	rm -rf $(OBJS)

flclean: clean
	rm -rf $(NAME)

re: fclean all
