/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beta <ade-beta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:51:44 by ade-beta          #+#    #+#             */
/*   Updated: 2022/05/05 12:11:15 by ade-beta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_str(char **str, int n)
{
	int	*ret;
	int	i;
	int	j;

	i = -1;
	ret = malloc(sizeof(int) * (n + 1));
	if (!ret)
		exit(0);
	while (++i < n)
		ret[i] = ft_atoi(str[i]);
	i = -1;
	while (++i < (n - 1))
	{
		j = i;
		while (++j < n)
		{
			if (ret[i] > ret[j])
			{
				ret[n] = ret[i];
				ret[i] = ret[j];
				ret[j] = ret[n];
			}
		}
	}
	return (ret);
}

int	get_ind(int val, int *sorted, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (sorted[i] == val)
			return (i);
	return (i);
}

void	set_a(t_stack *a, int *sorted, int n)
{
	a->next = NULL;
	a->ind = get_ind(a->value, sorted, n);
}

t_stack	*make_a(char **str, int n)
{
	int		i;
	int		*sorted;
	t_stack	*a;
	t_stack	*pre;
	t_stack	*ret;

	i = -1;
	pre = NULL;
	ret = NULL;
	sorted = sort_str(str, n);
	while (str[++i])
	{
		a = malloc(sizeof(t_stack));
		if (!a)
			free_all(ret);
		a->value = ft_atoi(str[i]);
		set_a(a, sorted, n);
		if (pre)
			pre->next = a;
		else
			ret = a;
		pre = a;
	}
	free(sorted);
	return (ret);
}
