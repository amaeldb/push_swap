/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:51:31 by ade-beta          #+#    #+#             */
/*   Updated: 2022/05/05 11:58:06 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sb(t_stack *b, int i)
{
	t_stack	*ph;

	ph = b->next;
	b->next = ph->next;
	ph->next = b;
	if (i)
		ft_printf("sb\n");
	return (ph);
}

t_stack	*rb(t_stack *b, int i)
{
	t_stack	*ph;
	t_stack	*ret;

	ret = b->next;
	ph = b;
	while (b->next)
		b = b->next;
	b->next = ph;
	ph->next = NULL;
	if (i)
		ft_printf("rb\n");
	return (ret);
}

t_stack	*rrb(t_stack *b, int i)
{
	t_stack	*ph;
	t_stack	*ret;

	ph = b;
	while (b->next->next)
		b = b->next;
	b->next->next = ph;
	ret = b->next;
	b->next = NULL;
	if (i)
		ft_printf("rrb\n");
	return (ret);
}

t_stacks	pb(t_stacks stacks)
{
	t_stack	*ph;

	if (stacks.a)
	{
		ph = stacks.a->next;
		stacks.a->next = stacks.b;
		stacks.b = stacks.a;
		stacks.a = ph;
	}
	ft_printf("pb\n");
	return (stacks);
}
