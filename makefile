CC = cc
CL = ar -rc
CN = rm -rf
FLAGS = -Wall -Wextra -Werror
SRC = push_swap.c ft_atoi.c ft_split.c check_dig.c ft_strjoin.c join_arg.c ft_strlen.c dupicte.c check_sort.c ft_strdup.c\
	  pa.c pb.c ra.c rb.c rra.c rrb.c sa.c sb.c
OBJ = ${SRC:.c=.o}

NAME = push_swap

all:${NAME}

${NAME}:${OBJ}
		${CL} ${NAME} ${OBJ} -o ${NAME}

%.o:%.c push_swap.h
		${CC} ${FLAGS} -c $<

clean:
		${CN} ${OBJ}
fclean: clean
		${CN} ${NAME}
re: fclean all

.PHONY: all bonus clean fclean re