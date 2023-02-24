NAME = push_swap
FLAGS = -Wall -Wextra -Werror -g3
FILES = push_swap_movements/swap_operations \
		push_swap_movements/push_operations \
		push_swap_movements/rotate_operations \
		push_swap_movements/reverse_rotate_operations \
		utils/matrix_len \
		utils/ft_power \
		utils/have_smaller_idx \
		utils/is_sorted \
		utils/ft_isnumber \
		utils/ft_issign \
		utils/ft_isspace \
		utils/ft_has_only_sign \
		linked_list_utils \
		init_stacks \
		ft_atoi \
		eval_input \
		ft_latoi \
		sort \
		sort_five \
		algorithm_setters \
		calculate_costs \
		perform_costs \
		rearrange_stack \
		solve_costs \
		push_swap
SRCS = $(addsuffix .c, $(addprefix srcs/, $(FILES)))
OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	clang $(FLAGS) -I ./ -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all
