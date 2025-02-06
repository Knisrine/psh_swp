CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = psh_swp.a
CFILES = ft_addBack.c ft_lstnew.c ft_split.c push_swp.c rrr.c r_ab.c \
		 rr_ab.c ft_strdup.c ft_strlen.c ft_addFront.c pa.c pb.c ft_lstSize.c \
		 swp_ab.c ft_atoi.c case_5.c case_3.c ft_putnbr.c get_smll.c sort_list.c
		 
OFILES = $(CFILES:.c=.o)


all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c psh_swp.h
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus: $(OBFILES)
	ar rcs $(NAME) $(OBFILES)

clean:
	rm -rf $(OFILES) $(OBFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean