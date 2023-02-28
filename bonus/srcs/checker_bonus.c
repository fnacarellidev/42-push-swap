/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:35:48 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 14:43:28 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/checker_bonus.h"
#include <stdio.h>

void    ft_print_stack(t_node *stack)
{
    int    i;

    i = 0;
    while (stack)
    {
        printf("Node %d = %s", ++i, stack->data);
        stack = stack->next;
    }
    printf("\n");
}

int		is_valid_operation(char *instruction, char **valid_operations)
{
	int		i;
	char	*curr_operation;
	int		curr_operation_len;

	i = 0;
	while (i < 11)
	{
		curr_operation = valid_operations[i];
		curr_operation_len = ft_strlen(curr_operation);
		if (ft_strncmp(instruction, curr_operation, curr_operation_len) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	init_valid_operations(char ***valid_operations)
{
	*valid_operations = malloc(sizeof(char *) * 12);
	(*valid_operations)[0] = ft_strdup("sa\n");
	(*valid_operations)[1] = ft_strdup("sb\n");
	(*valid_operations)[2] = ft_strdup("ss\n");
	(*valid_operations)[3] = ft_strdup("pa\n");
	(*valid_operations)[4] = ft_strdup("pb\n");
	(*valid_operations)[5] = ft_strdup("ra\n");
	(*valid_operations)[6] = ft_strdup("rb\n");
	(*valid_operations)[7] = ft_strdup("rr\n");
	(*valid_operations)[8] = ft_strdup("rra\n");
	(*valid_operations)[9] = ft_strdup("rrb\n");
	(*valid_operations)[10] = ft_strdup("rrr\n");
	(*valid_operations)[11] = NULL;
}

char	*get_stdin_instruction(t_node **operations, char **valid_operations)
{
	char	*instruction;

	instruction = get_next_line(1);
	if (instruction != NULL)
	{
		if (is_valid_operation(instruction, valid_operations))
			return (instruction);
		free(instruction);
		free_list(operations);
		ft_free_matrix((void**)valid_operations);
		exit(1);
	}
	return (NULL);
}

void	close_program(t_wrap *ptrs)
{
	free_list(ptrs->node_ptr);
	ft_free_matrix((void**)ptrs->valid_ops_ptr);
	free(ptrs->instruct_op);
	exit(1);
}

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
