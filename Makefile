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

# Name of the library.
NAME    := libft.a

# Name of the directories.
INC_DIR := includes
SRC_DIR := srcs
OBJ_DIR := objs

# Path of the directories.
INCLS   := $(INC_DIR)
SRCS    := $(wildcard $(SRC_DIR)/*.c)
OBJS    := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Define all the compiling flags.
CC      := gcc
CFLAGS  += -Wall -Werror -Wextra -g -fno-omit-frame-pointer -fsanitize=address
LFLAGS  += -I.
AR      := ar rcs
RLIB    := ranlib

# Compile and create everything.
all:	obj
		$(MAKE) -j $(NAME)

# Creates the object files' directory.
obj:
		@mkdir -p $(OBJ_DIR)

# This won't run if the object files don't exist or are not modified.
$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@$(RLIB) $(NAME)
		@echo "[INFO] $(NAME) created!"

# This won't run if the source files don't exist or are not modified.
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

# Rule to remove all the object files and directory.
clean:
		@rm -rf $(OBJS) $(OBJ_DIR)
		@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
		@rm -rf $(NAME) $(LIB_DIR)
		@echo "[INFO] Library [$(NAME)] removed!"

# Rule to re-make everything.
re:		fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY:	all clean fclean re
