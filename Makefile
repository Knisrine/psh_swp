CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NAMEB = checker
MFILES = ./Mandatory/ft_addBack.c ./Mandatory/ft_lstnew.c ./Mandatory/ft_split.c ./Mandatory/push_swp.c ./Mandatory/rotate.c ./Mandatory/rev_rotate.c \
		 ./Mandatory/ft_strdup.c ./Mandatory/ft_strlen.c ./Mandatory/ft_addFront.c ./Mandatory/push_a.c ./Mandatory/push_b.c ./Mandatory/ft_lstSize.c \
		 ./Mandatory/swap.c ./Mandatory/ft_atoi.c ./Mandatory/sort_5.c ./Mandatory/sort_3.c ./Mandatory/ft_putnbr.c ./Mandatory/get_smll.c ./Mandatory/index_list.c \
		 ./Mandatory/get_bgst.c ./Mandatory/sort_100.c ./Mandatory/get_position.c ./Mandatory/sort_500.c ./Mandatory/check_sort.c ./Mandatory/check_error.c \
		 ./Mandatory/ft_issign.c ./Mandatory/ft_isdigit.c ./Mandatory/ft_isspace.c ./Mandatory/make_lnkdlst.c ./Mandatory/ft_lstclear.c
BFILES =  ./Bonus/ft_addBack_bonus.c ./Bonus/ft_lstnew_bonus.c ./Bonus/ft_split_bonus.c ./Bonus/push_swp_bonus.c ./Bonus/rotate_bonus.c ./Bonus/rev_rotate_bonus.c \
		  ./Bonus/ft_addFront_bonus.c ./Bonus/push_a_bonus.c ./Bonus/push_b_bonus.c ./Bonus/ft_lstSize_bonus.c \
		 ./Bonus/swap_bonus.c ./Bonus/ft_atoi_bonus.c ./Bonus/sort_5_bonus.c ./Bonus/sort_3_bonus.c ./Bonus/ft_putnbr_bonus.c ./Bonus/get_smll_bonus.c ./Bonus/index_list_bonus.c \
		 ./Bonus/get_bgst_bonus.c ./Bonus/sort_100_bonus.c ./Bonus/get_position_bonus.c ./Bonus/sort_500_bonus.c ./Bonus/check_sort_bonus.c ./Bonus/check_error_bonus.c ./Bonus/ft_lstclear_bonus.c\
		 ./Bonus/ft_issign_bonus.c ./Bonus/ft_isdigit_bonus.c ./Bonus/ft_isspace_bonus.c ./Bonus/make_lnkdlst_bonus.c ./Bonus/gnl/get_next_line.c ./Bonus/gnl/get_next_line_utils.c
OFILES = $(MFILES:.c=.o)
OBFILES = $(BFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

bonus: $(OBFILES)
	$(CC) $(CFLAGS) $(OBFILES) -o $(NAMEB)

%.o: %.c psh_swp.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES) $(OBFILES)

fclean: clean
	rm -rf $(NAME) $(NAMEB)

re: fclean all

.PHONY: clean