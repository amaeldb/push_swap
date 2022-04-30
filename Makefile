SRCS	= push_swap.c setup.c small_sort.c move_a.c move_b.c move_ab.c \
			radix.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

NAME	= push_swap

.c.o:
	@ gcc ${FLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	@ make -C libft --silent
	@ gcc ${FLAGS} ${OBJS} libft/libft.a -o ${NAME}
	@ echo "Successfully compiled: ${NAME}"

clean:	${OBJS}
	@ make clean -C libft --silent
	@ rm -rf ${OBJS}

fclean:	clean
	@ make fclean -C libft --silent
	@ rm -rf ${NAME}

re:	fclean
	@ make all