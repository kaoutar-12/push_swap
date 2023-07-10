# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 17:19:46 by kmouradi          #+#    #+#              #
#    Updated: 2023/07/10 14:33:20 by kmouradi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CN = rm -rf
FLAGS = -Wall -Wextra -Werror -g
SOURCE = push_swap.c parsing/check_dig.c parsing/check_sort.c parsing/dupicte.c parsing/join_arg.c \
		instructions/ft_swap.c parsing/ft_fill.c instructions/ft_push.c instructions/ft_rev_rot.c instructions/ft_rot.c \
		sorting/ft_sort3.c sorting/find_min.c sorting/ft_sort4.c sorting/ft_sort5.c sorting/ft_indexing.c \
		parsing/parsing.c sorting/ft_sort100.c sorting/ft_sort500.c sorting/ft_sort2.c parsing/ft_check_intmax.c
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
