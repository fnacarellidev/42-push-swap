/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:13:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/20 09:40:23 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

t_node	*new_node(int data);
int		list_len(t_node **head);
void	del_last_node(t_node **head);
void	del_first_node(t_node **head);
void	node_add_back(t_node **head, t_node *node);
void	node_add_front(t_node **head, t_node *node);
void	free_list(t_node **head);
int		ft_atoi(const char *nptr);
void	init_stacks(t_node ***stack_a, t_node ***stack_b, int argc, char **argv);
void	swap_a(t_node **stack_a);
void	swap_b(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);
void	rotate_a(t_node **stack_a);
void	rotate_b(t_node **stack_b);

#endif
