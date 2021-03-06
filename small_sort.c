/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:51:49 by ade-beta          #+#    #+#             */
/*   Updated: 2022/05/05 18:56:58 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_ind(t_stack *a, int ind, int n)
{
	int		i;
	t_stack	*ph;

	i = 1;
	ph = a;
	while (ph->ind != ind && ++i)
		ph = ph->next;
	if (i < ((n - 1) - ind))
		while (--i)
			a = ra(a, 1);
	else
		while (++i < ((n + 2) - ind))
			a = rra(a, 1);
	return (a);
}

t_stacks	three(t_stacks s, int i)
{
	if (s.a->ind == (0 + i) && s.a->next->ind == (2 + i))
	{
		s.a = sa(s.a, 1);
		s.a = ra(s.a, 1);
	}
	else if (s.a->ind == (1 + i) && s.a->next->ind == (0 + i))
		s.a = sa(s.a, 1);
	else if (s.a->ind == (1 + i) && s.a->next->ind == (2 + i))
		s.a = rra(s.a, 1);
	else if (s.a->ind == (2 + i) && s.a->next->ind == (0 + i))
		s.a = ra(s.a, 1);
	else if (s.a->ind == (2 + i) && s.a->next->ind == (1 + i))
	{
		s.a = sa(s.a, 1);
		s.a = rra(s.a, 1);
	}
	return (s);
}

void	five(t_stacks s)
{
	s.a = find_ind(s.a, 0, 5);
	is_sorted(s.a, 5);
	s = pb(s);
	s.a = find_ind(s.a, 1, 5);
	s = pb(s);
	s = three(s, 2);
	s = pa(s);
	s = pa(s);
	free_all(s.a);
}

void	four(t_stacks s)
{
	s.a = find_ind(s.a, 0, 4);
	is_sorted(s.a, 4);
	s = pb(s);
	s = three(s, 1);
	s = pa(s);
	free_all(s.a);
}

void	small(t_stacks s, int n)
{
	if (n == 2 && s.a->ind == 1)
		ft_printf("sa\n");
	else if (n == 3)
		three(s, 0);
	else if (n == 4)
		four(s);
	else if (n == 5)
		five(s);
	free_all(s.a);
}
