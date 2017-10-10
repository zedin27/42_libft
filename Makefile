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

SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_striteri.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strrchr.c \
ft_strcat.c ft_strnew.c ft_strchr.c ft_strdup.c ft_strcmp.c ft_strcpy.c\
ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strncmp.c \
ft_strstr.c ft_tolower.c ft_toupper.c ft_striter.c ft_strmap.c ft_strmapi.c \
ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strtrim.c ft_strtok.c \
ft_iswhitespace.c ft_strsplit.c ft_putchar_fd.c ft_strsplit.c ft_wordcount.c \
ft_wordlength.c ft_memdel.c ft_memalloc.c ft_putendl_fd.c ft_putendl.c \
ft_putstr.c ft_putstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_strclr.c ft_strdel.c \
ft_strequ.c ft_strnequ.c ft_itoa.c ft_itoa_base.c ft_lstdelone.c ft_lstnew.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJS    = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_memccpy.o ft_memchr.o ft_striteri.o \
ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strrchr.o \
ft_strcat.o ft_strnew.o ft_strchr.o ft_strdup.o ft_strcmp.o ft_strcpy.o\
ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncpy.o ft_strnstr.o ft_strncmp.o \
ft_strstr.o ft_tolower.o ft_toupper.o ft_striter.o ft_strmap.o ft_strmapi.o \
ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strtrim.o ft_strtok.o \
ft_iswhitespace.o ft_strsplit.o ft_putchar_fd.o ft_strsplit.o ft_wordcount.o \
ft_wordlength.o ft_memdel.o ft_memalloc.o ft_putendl_fd.o ft_putendl.o \
ft_putstr.o ft_putstr_fd.o ft_putnbr.o ft_putnbr_fd.o ft_strclr.o ft_strdel.o \
ft_strequ.o ft_strnequ.o ft_itoa.o ft_itoa_base.o ft_lstdelone.o ft_lstnew.o \
ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o

HEADER = libft.h

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc libft.a $(OBJS)
	ranlib libft.a

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
