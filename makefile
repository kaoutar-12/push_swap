# CC = cc
# CL = ar -rc
# CN = rm -rf
# FLAGS = -wall -wextra -werror
# SRC = push_swap ft_split ft_atoi check_only_dig
# OBJ = ${SRC=.o}

# NAME = push_swap.a

# all:${NAME}

# ${NAME}:${OBJ}
# 		${CL} ${NAME} ${OBJ}

# %.o: %.c push_swap.h
# 		${CC} ${FLAGS} -c $<
# clean:
# 		${CN} ${OBJ}
# fclean: clean
# 		${CN} ${NAME}

# re : fclean all

# .PHONY : all bonus clean fclean re



CC = cc
AR = ar -rc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
SRC = push_swap.c ft_split.c ft_atoi.c check_only_dig.c
OBJ = ${SRC:.c=.o}

NAME = push_swap.a

all: ${NAME}

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

%.o: %.c push_swap.h
		${CC} ${FLAGS} -c $< -o $@

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
