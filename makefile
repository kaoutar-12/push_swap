# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 17:19:46 by kmouradi          #+#    #+#              #
#    Updated: 2023/07/10 21:01:58 by kmouradi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CN = rm -rf
FLAGS = -Wall -Wextra -Werror
SOURCE = mandatory/push_swap.c\
	mandatory/parsing/check_dig.c\
	mandatory/parsing/dupicte.c\
	mandatory/parsing/ft_fill.c\
	mandatory/parsing/join_arg.c\
	mandatory/parsing/check_sort.c\
	mandatory/parsing/ft_check_intmax.c\
	mandatory/parsing/ft_indexing.c\
	mandatory/parsing/parsing.c\
	mandatory/instructions/ft_push.c\
	mandatory/instructions/ft_rev_rot.c\
	mandatory/instructions/ft_rot.c\
	mandatory/instructions/ft_swap.c\
	mandatory/sorting/find_min.c\
	mandatory/sorting/ft_sort100.c\
	mandatory/sorting/ft_sort2.c\
	mandatory/sorting/ft_sort3.c\
	mandatory/sorting/ft_sort4.c\
	mandatory/sorting/ft_sort5.c\
	mandatory/sorting/ft_sort500.c
LIBFT_DIR = mandatory/libft
FTPRINTF_DIR = mandatory/ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(FTPRINTF_DIR)/libftprintf.a
OBJECT = $(SOURCE:.c=.o)
NAME = push_swap

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECT) $(LIBFT) $(FTPRINTF)
	$(CC) $(FLAGS) $(OBJECT) $(LIBFT) $(FTPRINTF) -o $(NAME)

%.o: %.c mandatory/push_swap.h
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
