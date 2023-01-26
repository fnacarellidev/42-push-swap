/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:13:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/01/26 16:12:15 by fnacarel         ###   ########.fr       */
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

t_node		*new_node(int data);
int			list_len(t_node **head);
void		del_last_node(t_node **head);
void		del_first_node(t_node **head);
void		node_add_back(t_node **head, t_node *node);
void		node_add_front(t_node **head, t_node *node);
void		free_list(t_node **head);
int			ft_atoi(const char *nptr);
void		init_stacks(t_node ***stack_a, t_node ***stack_b, int argc, char **argv);
void		swap_a(t_node **stack_a);
void		swap_b(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
void		push_a(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		rotate_a(t_node **stack_a);
void		rotate_b(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		rev_rotate_a(t_node **stack_a);
void		rev_rotate_b(t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);
void		eval_input(int argc, char **argv);
int			matr_len(void **matrix);
int			*atoi_argv(char **argv);
int			is_sorted(t_node *stack);
int			ft_power(int base, int exponent);
int			ft_issign(char c);
int			ft_isnumber(char c);
int			ft_isspace(char c);
int			ft_has_only_sign(char *str);

#endif
