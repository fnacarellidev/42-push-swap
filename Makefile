NAME = push_swap
FLAGS = -Wall -Wextra -Werror -g3
FILES = node_operations \
		new_node \
		free_list \
		init_stacks \
		ft_atoi \
		swap_operations \
		push_operations \
		rotate_operations \
		reverse_rotate_operations \
		eval_input \
		matr_len \
		atoi_argv \
		is_sorted \
		ft_latoi \
		ft_power \
		ft_atoi_parsing \
		sort_three \
		sort_five \
		sort_four \
		get_val \
		sort
SRCS = $(addsuffix .c, $(addprefix srcs/, $(FILES)))
OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang $(FLAGS) main.c $(OBJS) -o $(NAME)

$(OBJS) : $(SRCS)

%.o : %.c
	clang $(FLAGS) -I ./ -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all
