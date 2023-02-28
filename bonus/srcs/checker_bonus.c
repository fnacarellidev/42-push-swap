/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:35:48 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 17:30:02 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/checker_bonus.h"

static void	free_stuff(t_wrap *wrap)
{
	free_operation_list(wrap->node_ptr);
	ft_free_matrix((void **)(wrap->valid_ops_ptr));
	free_list(wrap->stack_a);
	free_list(wrap->stack_b);
}

char	*eval_oper(t_opers **operations, char **valid_operations, t_wrap *wrap)
{
	char	*instruction;

	instruction = get_next_line(0);
	if (instruction != NULL)
	{
		if (is_valid_operation(instruction, valid_operations))
			return (instruction);
		free(instruction);
		wrap->node_ptr = operations;
		wrap->valid_ops_ptr = valid_operations;
		free_stuff(wrap);
		write(1, "Error\n", 6);
		exit(1);
	}
	return (NULL);
}

void	checker(t_opers ***opers, char **std_opers, t_node **s_a, t_node **s_b)
{
	t_wrap		wrap;
	t_opers		*node;
	char		*stdin_instruction;

	wrap.stack_a = s_a;
	wrap.stack_b = s_b;
	while (1)
	{
		stdin_instruction = eval_oper(*opers, std_opers, &wrap);
		if (stdin_instruction == NULL)
			break ;
		node = oper_new_node(stdin_instruction);
		node_add_back_oper(*opers, node);
		free(stdin_instruction);
	}
	run_opers(s_a, s_b, **opers);
	if (is_sorted(*s_a) && list_len(s_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_wrap	wrap;	
	t_node	**stack_a;
	t_node	**stack_b;
	char	**valid_operations;
	t_opers	**operations;

	eval_input(argc, argv);
	operations = malloc(sizeof(t_node *));
	*operations = NULL;
	init_valid_operations(&valid_operations);
	set_stacks(&stack_a, &stack_b, argc, argv);
	wrap.stack_a = stack_a;
	wrap.stack_b = stack_b;
	wrap.valid_ops_ptr = valid_operations;
	wrap.node_ptr = operations;
	checker(&operations, valid_operations, stack_a, stack_b);
	free_stuff(&wrap);
	return (0);
}
