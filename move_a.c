#include "push_swap.h"

t_stack	*sa(t_stack *a, int i)
{
	t_stack	*ph;

	ph = a->next;
	a->next = ph->next;
	ph->next = a;
	if (i)
		ft_printf("sa\n");
	return (ph);
}

t_stack	*ra(t_stack *a, int i)
{
	t_stack	*ph;
	t_stack	*ret;

	ret = a->next;
	ph = a;
	while (a->next)
		a = a->next;
	a->next = ph;
	ph->next = NULL;
	if (i)
		ft_printf("ra\n");
	return (ret);
}

t_stack	*rra(t_stack *a, int i)
{
	t_stack	*ph;
	t_stack	*ret;

	ph = a;
	while (a->next->next)
		a = a->next;
	a->next->next = ph;
	ret = a->next;
	a->next = NULL;
	if (i)
		ft_printf("rra\n");
	return (ret);
}

t_stacks	pa(t_stacks stacks)
{
	t_stack	*ph;

	if(stacks.b)
	{
		ph = stacks.b->next;
		stacks.b->next = stacks.a;
		stacks.a = stacks.b;
		stacks.b = ph;
	}
	ft_printf("pa\n");
	return (stacks);
}