/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:44:22 by fnacarel          #+#    #+#             */
/*   Updated: 2023/02/28 14:21:42 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	char			*data;
	struct s_node	*next;
}	t_node;

typedef struct s_wrap
{
	t_node	**node_ptr;
	char	**valid_ops_ptr;
	char	*instruct_op;
}	t_wrap;

int			ft_issign(char c);
int			ft_isspace(char c);
int			ft_isnumber(char c);
int			ft_strlen(char *str);
int			list_len(t_node **head);
int			is_sorted(t_node *stack);
int			matrix_len(void **matrix);
int			ft_has_only_space(char *str);
int			ft_power(int base, int exponent);
int			ft_strncmp(char *s1, char *s2, int n);
int			ft_atoi(const char *nptr);
void		ft_bzero(char buf[4]);
void		free_list(t_node **head);
void		ft_free_matrix(void **matrix);
void		eval_input(int argc, char **argv);
void		node_add_back(t_node **head, t_node *node);
t_node		*new_node(char *data);
char		*ft_strdup(char *str);
long int	ft_latoi(const char *nptr);

#endif
