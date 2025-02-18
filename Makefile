CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
NAME = push_swap
CFILES = ft_addBack.c ft_lstnew.c ft_split.c push_swp.c rrr.c rotate.c \
		 rev_rotate.c ft_strdup.c ft_strlen.c ft_addFront.c push_a.c push_b.c ft_lstSize.c \
		 swap.c ft_atoi.c case_5.c case_3.c ft_putnbr.c get_smll.c index_list.c get_bgst.c \
		 sort_100.c get_position.c sort_500.c check_sort.c
OFILES = $(CFILES:.c=.o)


all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.c psh_swp.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES) $(OBFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean