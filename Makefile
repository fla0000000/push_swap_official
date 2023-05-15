NAME = push_swap
LIB_M = libfreal/operation/operation.a
LIB_L = libfreal/libft.a
LIB_G = libfreal/getnextline/get_next_line.a
SRCS = ${wildcard *.c}
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(%.c)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@make -C libfreal/operation
	@make -C libfreal
	@$(CC) $(CFLAGS) $(OBJS) $(LIB_M) $(LIB_L) -o $(NAME)

%.c: %.o
	@$(CC) $(CFLAGS) -o $<

clean:
	@rm -f $(OBJS)
	@make clean -C libfreal/operation
	@make clean -C libfreal/getnextline
	@make clean -C libfreal
	
fclean: clean
	@rm -f $(NAME) $(LIB_M) $(NAME)
	@make fclean -C libfreal/operation
	@make fclean -C libfreal/getnextline
	@make fclean -C libfreal
	
re: fclean all

.PHONY: all clean fclean re
