NAME = push_swap
NAMEBONUS = checker
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
		utils/ft_has_only_space \
		linked_list_utils \
		set_stacks \
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
SRCS = $(addsuffix .c, $(addprefix mandatory/srcs/, $(FILES)))
OBJS = $(SRCS:%.c=%.o)

BONUSFILES =	utils/ft_matrix_len_bonus \
				utils/ft_free_matrix_bonus \
				utils/ft_strdup_bonus \
				utils/ft_strlen_bonus \
				utils/ft_strncmp_bonus \
				utils/ft_has_only_space_bonus \
				utils/ft_issign_bonus \
				utils/ft_isnumber_bonus \
				utils/ft_isspace_bonus \
				utils/ft_power_bonus \
				utils/ft_is_sorted_bonus \
				linked_list/free_list_bonus \
				linked_list/list_len_bonus \
				linked_list/new_node_bonus \
				linked_list/node_add_back_bonus \
				linked_list/node_add_front_bonus \
				push_swap_movements/push_operations_bonus \
				push_swap_movements/rotate_operations_bonus \
				push_swap_movements/reverse_rotate_operations_bonus \
				push_swap_movements/swap_operations_bonus \
				ft_atoi_bonus \
				ft_latoi_bonus \
				eval_input_bonus \
				checker_bonus \
				set_stacks_bonus \
				valid_operations_bonus \
				run_operations_bonus

GNLFILES =	get_next_line/get_next_line \
			get_next_line/get_next_line_utils

GNLLIB =	$(addprefix bonus/srcs/, get_next_line/gnl.a)

GNLSRCS =	$(addsuffix .c, $(addprefix bonus/srcs/, $(GNLFILES)))
GNLOBJS =	$(GNLSRCS:%.c=%.o)
BONUSSRCS = $(addsuffix .c, $(addprefix bonus/srcs/, $(BONUSFILES)))
BONUSOBJS = $(BONUSSRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	clang $(FLAGS) $(OBJS) -o $(NAME)

$(NAMEBONUS) : $(BONUSOBJS) $(GNLLIB)
	clang $(FLAGS) -I./bonus/includes -I./bonus/srcs/get_next_line/ $(BONUSOBJS) $(GNLLIB) -o $(NAMEBONUS)

bonus : $(NAMEBONUS)

$(GNLLIB) : $(GNLOBJS)
	ar rcs $(GNLLIB) $(GNLOBJS)

%.o : %.c
	clang $(FLAGS) -I ./ -c $< -o $@

clean :
	rm -rf $(OBJS) $(BONUSOBJS) $(GNLOBJS) $(GNLLIB)

fclean : clean
	rm -rf $(NAME) $(NAMEBONUS)

re : fclean all
