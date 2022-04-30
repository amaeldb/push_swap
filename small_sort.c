#include "push_swap.h"

t_stack	*find_ind(t_stack *a, int ind, int n)
{
	int	i;
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

void	three(t_stacks s, int i)
{
	if (s.a->ind == (0 + i) && s.a->next->ind == (2 + i))
		ft_printf("sa\nra\n");
	else if (s.a->ind == (1 + i) && s.a->next->ind == (0 + i))
		ft_printf("sa\n");
	else if (s.a->ind == (1 + i) && s.a->next->ind == (2 + i))
		ft_printf("rra\n");
	else if (s.a->ind == (2 + i) && s.a->next->ind == (0 + i))
		ft_printf("ra\n");
	else if (s.a->ind == (2 + i) && s.a->next->ind == (1 + i))
		ft_printf("sa\nrra\n");
}

void	five(t_stacks s)
{
	s.a = find_ind(s.a, 0, 5);
	s = pb(s);
	s.a = find_ind(s.a, 1, 5);
	s = pb(s);
	three(s, 2);
	ft_printf("pa\npa\n");
}

void	four(t_stacks s)
{
	s.a = find_ind(s.a, 0, 4);
	s = pb(s);
	three(s, 1);
	ft_printf("pa\n");
}

void	small(t_stacks s, int n)
{
	if (n == 2 && s.a->ind == 1)
		ft_printf("sa\n");
	else if (n == 3)
		three(s, 0);
	else if (n == 4)
		//radix(s, n);
		four(s);
	else if (n == 5)
		five(s);
	free_all(s.a);
}