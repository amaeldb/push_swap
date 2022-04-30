#include "push_swap.h"

void	radix(t_stacks s, int n)
{
	int i;
	int dis;

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