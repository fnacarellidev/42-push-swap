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

{
void	checker(t_node ***operations, char **valid_operations)
{
	t_node	*node;
	t_wrap	wrapper;
	char	*stdin_instruction;

	wrapper.node_ptr = *operations;
	wrapper.valid_ops_ptr = valid_operations;
	while (1)
	{
		stdin_instruction = get_stdin_instruction(*operations, valid_operations);
		wrapper.instruct_op = stdin_instruction;
		if (stdin_instruction == NULL)
			close_program(&wrapper);
		node = new_node(stdin_instruction);
		node_add_back(*operations, node);
		free(stdin_instruction);
	}
}

int	main(int argc, char **argv)
{
	char 	buf[4];
	char	**valid_operations;

	eval_input(argc, argv);
	init_valid_operations(&valid_operations);
	while (read(1, buf, 4))
	{
		if (!is_valid_operation(buf, valid_operations))
		{
			write(1, "Error\n", 6);
			break ;
		}
		ft_bzero(buf);
	}
	ft_free_matrix((void**)valid_operations);
	return (0);
}
