CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
NAME = push_swp
CFILES = ft_addBack.c ft_lstnew.c ft_split.c push_swp.c rrr.c r_ab.c \
		 rr_ab.c ft_strdup.c ft_strlen.c ft_addFront.c pa.c pb.c ft_lstSize.c \
		 swp_ab.c ft_atoi.c case_5.c case_3.c ft_putnbr.c get_smll.c index_list.c
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