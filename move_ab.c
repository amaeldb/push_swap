/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:51:28 by ade-beta          #+#    #+#             */
/*   Updated: 2022/05/05 11:53:41 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	ss(t_stacks stacks)
{
	stacks.a = sa(stacks.a, 0);
	stacks.b = sb(stacks.b, 0);
	ft_printf("ss\n");
	return (stacks);
}

t_stacks	rr(t_stacks stacks)
{
	stacks.a = ra(stacks.a, 0);
	stacks.b = rb(stacks.b, 0);
	ft_printf("rr\n");
	return (stacks);
}

t_stacks	rrr(t_stacks stacks)
{
	stacks.a = rra(stacks.a, 0);
	stacks.b = rrb(stacks.b, 0);
	ft_printf("rrr\n");
	return (stacks);
}
