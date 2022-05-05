/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:51:41 by ade-beta          #+#    #+#             */
/*   Updated: 2022/05/05 12:02:34 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stacks s, int n)
{
	int	i;
	int	dis;

	dis = -1;
	while (is_sorted(s.a, n))
	{
		i = -1;
		++dis;
		while (++i < n)
		{
			if ((s.a->ind >> dis) & 1)
				s.a = ra(s.a, 1);
			else
				s = pb(s);
		}
		while (s.b)
			s = pa(s);
	}
}
