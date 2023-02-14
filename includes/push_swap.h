/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:13:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/14 01:48:19 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	int				idx;
	int				curr_pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
}	t_node;

t_node		*new_node(int data);
int			ft_abs(int i);
int			ft_issign(char c);
int			ft_isspace(char c);
int			ft_isnumber(char c);
int			matr_len(void **matrix);
int			list_len(t_node **head);
int			*atoi_argv(char **argv);
int			is_sorted(t_node *stack);
int			ft_atoi(const char *nptr);
int			ft_has_only_sign(char *str);
int			get_max_val(t_node **stack, int idx);
int			get_min_val(t_node **stack, int idx);
int			ft_power(int base, int exponent);
int			get_min_val_index(t_node **stack);
int			get_max_val_index(t_node **stack);
void		free_list(t_node **head);
void		swap_a(t_node **stack_a);
void		swap_b(t_node **stack_b);
void		sort_five(t_node **stack_a, t_node **stack_b);
void		rotate_a(t_node **stack_a);
void		rotate_b(t_node **stack_b);
void		sort_three(t_node **stack);
void		del_last_node(t_node **head);
void		del_first_node(t_node **head);
void		rev_rotate_a(t_node **stack_a);
void		rev_rotate_b(t_node **stack_b);
void		eval_input(int argc, char **argv);
void		ss(t_node **stack_a, t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);
void		push_a(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		node_add_back(t_node **head, t_node *node);
void		node_add_front(t_node **head, t_node *node);
void		sort_big(t_node **stack_a, t_node **stack_b);
void		sort_four(t_node **stack_a, t_node **stack_b);
void		set_target_pos(t_node **stack_a, t_node *node_b);
void		sort(t_node **stack_a, t_node **stack_b, int size_a);
void		init_stacks(t_node ***stack_a, t_node ***stack_b, int argc, char **argv);
long int	ft_latoi(const char *nptr);

#endif
