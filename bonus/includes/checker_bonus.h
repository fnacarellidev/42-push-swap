/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:44:22 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 17:45:14 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	int				idx;
	struct s_node	*next;
}	t_node;

typedef struct s_opers
{
	char			*data;
	struct s_opers	*next;
}	t_opers;

typedef struct s_wrap
{
	t_node	**stack_a;
	t_node	**stack_b;
	t_opers	**node_ptr;
	char	**valid_ops_ptr;
}	t_wrap;


int			ft_issign(char c);
int			ft_isspace(char c);
int			ft_isnumber(char c);
int			ft_strlen(char *str);
int			list_len(t_node **head);
int			is_sorted(t_node *stack);
int			ft_atoi(const char *nptr);
int			matrix_len(void **matrix);
int			ft_has_only_space(char *str);
int			oper_list_len(t_opers **head);
int			ft_power(int base, int exponent);
int			ft_strncmp(char *s1, char *s2, int n);
int			is_valid_operation(char *instruction, char **valid_operations);
void		free_list(t_node **head);
void		ft_free_matrix(void **matrix);
void		eval_input(int argc, char **argv);
void		free_operation_list(t_opers **head);
void		node_add_back(t_node **head, t_node *node);
void		init_valid_operations(char ***valid_operations);
void		node_add_back_oper(t_opers **head, t_opers *node);
void		run_opers(t_node **stack_a, t_node **stack_b, t_opers *operations);
void		set_stacks(t_node ***stk_a, t_node ***stk_b, int argc, char **argv);
char		*ft_strdup(char *str);
char		*get_next_line(int fd);
void		node_add_front(t_node **head, t_node *node);
void		push_a(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		rev_rotate_b(t_node **stack_b);
void		rev_rotate_a(t_node **stack_a);
void		rrr(t_node **stack_a, t_node **stack_b);
void		rotate_a(t_node **stack_a);
void		rotate_b(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		swap_a(t_node **stack_a);
void		swap_b(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
long int	ft_latoi(const char *nptr);
t_node		*new_node(int data);
t_opers		*oper_new_node(char *data);

#endif
