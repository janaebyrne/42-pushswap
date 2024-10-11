/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:12:59 by jbyrne            #+#    #+#             */
/*   Updated: 2024/09/06 16:13:05 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack_node **a, bool print)
{
	t_stack_node	*tmp;
	t_stack_node	*help;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	help = ft_lstlast(*a);
	help->next = tmp;
	help = tmp->next;
	tmp->next = NULL;
	*a = help;
	if (!print)
		write(1, "ra\n", 3);
}

void	rb(t_stack_node **b, bool print)
{
	t_stack_node	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (!print)
		write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b, bool print)
{
	t_stack_node	*tmp;

	if (!*a || !(*a)->next || (!(*b) || !(*b)->next))
		return ;
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (!print)
		write(1, "rr\n", 3);
}
