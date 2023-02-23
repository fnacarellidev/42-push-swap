NAME = push_swap
FLAGS = -Wall -Wextra -Werror -g3
FILES = push_swap_movements/swap_operations \
		push_swap_movements/push_operations \
		push_swap_movements/rotate_operations \
		push_swap_movements/reverse_rotate_operations \
		node_operations \
		init_stacks \
		ft_atoi \
		eval_input \
		is_sorted \
		ft_latoi \
		ft_atoi_utils \
		sort_three \
		sort_five \
		sort_four \
		get_val \
		ft_utils00 \
		sort \
		sort_big \
		set_target_pos \
		calculate_costs \
		ft_abs \
		perform_costs
SRCS = $(addsuffix .c, $(addprefix srcs/, $(FILES)))
OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang $(FLAGS) main.c $(OBJS) -o $(NAME)

%.o : %.c
	clang $(FLAGS) -I ./ -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all
