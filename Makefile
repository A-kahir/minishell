CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = minishell

SRC = execution/exec.c execution/redirection.c utils_func/ft_close_fd.c execution/min.c \
	builtins/ft_echo.c builtins/ft_cd.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c minishell.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean