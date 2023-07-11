# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 17:19:46 by kmouradi          #+#    #+#              #
#    Updated: 2023/07/11 09:13:47 by kmouradi         ###   ########.fr        #
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
SOURCE_BONUS = checker_bonus/parsing/check_dig.c\
	checker_bonus/checker.c\
	checker_bonus/parsing/dupicte.c\
	checker_bonus/parsing/ft_fill.c\
	checker_bonus/parsing/join_arg.c\
	checker_bonus/parsing/check_sort.c\
	checker_bonus/parsing/ft_check_intmax.c\
	checker_bonus/parsing/ft_indexing.c\
	checker_bonus/parsing/parsing.c\
	checker_bonus/instructions/ft_push.c\
	checker_bonus/instructions/ft_rev_rot.c\
	checker_bonus/instructions/ft_rot.c\
	checker_bonus/instructions/ft_swap.c\
	checker_bonus/sorting/find_min.c\
	checker_bonus/sorting/ft_sort100.c\
	checker_bonus/sorting/ft_sort2.c\
	checker_bonus/sorting/ft_sort3.c\
	checker_bonus/sorting/ft_sort4.c\
	checker_bonus/sorting/ft_sort5.c\
	checker_bonus/sorting/ft_sort500.c\
	checker_bonus/gnl/get_next_line.c\
	checker_bonus/gnl/get_next_line_utils.c
LIBFT_DIR = libft
FTPRINTF_DIR = ft_printf
LIBFT = $(LIBFT_DIR)/libft.a
FTPRINTF = $(FTPRINTF_DIR)/libftprintf.a
OBJECT = $(SOURCE:.c=.o)
OBJECT_BONUS = $(SOURCE_BONUS:.c=.o)
NAME = push_swap
BONUS = checker

all: $(NAME)
bonus: $(BONUS)

$(NAME): $(OBJECT) $(LIBFT) $(FTPRINTF) mandatory/push_swap.h
	$(CC) $(FLAGS) $(OBJECT) $(LIBFT) $(FTPRINTF) -o $(NAME)
$(BONUS): $(OBJECT_BONUS) $(LIBFT) $(FTPRINTF) checker_bonus/checker.h
	$(CC) $(FLAGS) $(OBJECT_BONUS) $(LIBFT) $(FTPRINTF) -o $(BONUS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FTPRINTF_DIR) clean
	$(RM) $(OBJECT)
	$(RM) $(OBJECT_BONUS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FTPRINTF_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(BONUS)
re: fclean all

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FTPRINTF):
	$(MAKE) -C $(FTPRINTF_DIR)

.PHONY: all clean fclean re bonus