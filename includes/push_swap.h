/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:13:21 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/24 12:49:06 by fnacarel         ###   ########.fr       */
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
int			ft_issign(char c);
int			ft_isspace(char c);
int			matr_len(void **matrix);
int			list_len(t_node **head);
int			is_sorted(t_node *stack);
int			ft_atoi(const char *nptr);
int			ft_has_only_sign(char *str);
int			ft_power(int base, int exponent);
int			have_bigger_idx(int idx, t_node *stack);
int			have_smaller_idx(int idx, t_node *stack);
int			calc_cost_a(t_node *stack_a, t_node *node_b);
int			calc_cost_b(t_node *stack_a, t_node *node_b);
int			get_position_with_cheapest_cost(t_node *stack_b);
void		swap_a(t_node **stack_a);
void		swap_b(t_node **stack_b);
void		sort_five(t_node **stack_a, t_node **stack_b);
void		rotate_a(t_node **stack_a, int called_from_rr);
void		rotate_b(t_node **stack_b, int called_from_rr);
void		sort_three(t_node **stack);
void		del_last_node(t_node **head);
void		del_first_node(t_node **head);
void		rev_rotate_a(t_node **stack_a, int called_from_rrr);
void		rev_rotate_b(t_node **stack_b, int called_from_rrr);
void		rearrange_stack(t_node **stack);
void		eval_input(int argc, char **argv);
void		ss(t_node **stack_a, t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);
void		push_a(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		node_add_back(t_node **head, t_node *node);
void		solve_cost_a(t_node **stack_a, int cost_a);
void		solve_cost_b(t_node **stack_a, int cost_a);
void		node_add_front(t_node **head, t_node *node);
void		set_costs(t_node *stack_a, t_node *stack_b);
void		sort_big(t_node **stack_a, t_node **stack_b);
void		set_positions(t_node *stack_a, t_node *stack_b);
void		set_target_pos(t_node **stack_a, t_node *node_b);
void		sort(t_node **stack_a, t_node **stack_b, int size_a);
void		perform_cheapest_action(t_node **stack_a, t_node **stack_b);
void		solve_both(t_node **stack_a, int *cost_a, t_node **stack_b, int *cost_b);
void		init_stacks(t_node ***stack_a, t_node ***stack_b, int argc, char **argv);
long int	ft_latoi(const char *nptr);

#endif
