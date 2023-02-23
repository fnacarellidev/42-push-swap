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
		param_parsing \
		sort_three \
		ft_utils00 \
		sort \
		algorithm_setters \
		calculate_costs \
		perform_costs \
		compare_indexes \
		rearrange_stack \
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
