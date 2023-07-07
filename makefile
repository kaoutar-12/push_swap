# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 17:19:46 by kmouradi          #+#    #+#              #
#    Updated: 2023/07/07 18:11:16 by kmouradi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CN = rm -rf
FLAGS = -Wall -Wextra -Werror -g
SOURCE = push_swap.c check_dig.c check_sort.c dupicte.c join_arg.c \
		instructions/ft_swap.c
LIBFT_DIR = libft
FTPRINTF_DIR = ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(FTPRINTF_DIR)/libftprintf.a
OBJECT = $(SOURCE:.c=.o)
NAME = push_swap

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECT) $(LIBFT) $(FTPRINTF)
	$(CC) $(FLAGS) $(OBJECT) $(LIBFT) $(FTPRINTF) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FTPRINTF_DIR) clean
	$(RM) $(OBJECT)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FTPRINTF_DIR) fclean
	$(RM) $(NAME)

re: fclean all

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FTPRINTF):
	$(MAKE) -C $(FTPRINTF_DIR)
