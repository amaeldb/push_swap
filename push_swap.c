#include "push_swap.h"

int	is_sorted(t_stack *a, int i/*, int n*/)
{
	//int	j;
	t_stack	*ph;

	//j = 0;
	ph = a;
	if	(i > 1)
	{
		while (a->next /*&& ++j < i*/)
		{
			if (a->ind > a->next->ind)
				return (1);
			a = a->next;
		}
	}
	// if (i != n)
	// {
	// 	if (i > (n / 2))
	// 		while (i++ != n)
	// 			ft_printf("rra\n");
	// 	else if (i > 1)
	// 		while (i--)
	// 			ft_printf("ra\n");
	// }
	free_all(ph);
	return (0);
}

int	check_params(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = -1;
		if (argv[i][0] == '-' && argv[i][1])
			j++;
		while (argv[i][++j])
			if (!ft_isdigit(argv[i][j]))
				return (1);
		j = i;
		while (argv[++j])
			if (!ft_strncmp(argv[i], argv[j], 11))
				return (1);
		if ((argv[i][0] == '-' && ft_strncmp(argv[i], "-2147483648", 11) == 1 && ft_strlen(argv[i]) == 11)
			|| (argv[i][0] != '-' && ft_strncmp(argv[i], "2147483647", 10) == 1 && ft_strlen(argv[i]) == 10)
				|| (argv[i][0] == '-' && ft_strlen(argv[i]) > 11)
					|| (argv[i][0] != '-' && ft_strlen(argv[i]) > 10))
			return (1);
	}
	return (0);
}

void	free_all(t_stack *a)
{
	t_stack	*ph;

	ph = a;
	while (a)
	{
		ph = a->next;
		free(a);
		a = ph;
	}
	exit(0);
}

int	main(int argc, char **argv)
{
	int	i;
	t_stacks stacks;

	i = -1;
	if (argc < 2)
		return (0);
	if (check_params(&argv[1]))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	stacks.a = make_a(&argv[1], (argc - 1));
	stacks.b = NULL;
	if ((argc - 1) < 6)
		small(stacks, (argc - 1));
	radix(stacks, (argc - 1));


	// stacks = pb(stacks);
	// t_stack *ph = stacks.a;
	// while (ph)
	// {
	// 	ft_printf("a = %d\n", ph->value);
	// 	ph = ph->next;
	// }
	// ph = stacks.b;
	// while (ph)
	// {
	// 	ft_printf("b = %d\n", ph->value);
	// 	ph = ph->next;
	// }

	// stacks = pa(stacks);
	// ph = stacks.a;
	// while (ph)
	// {
	// 	ft_printf("a = %d\n", ph->value);
	// 	ph = ph->next;
	// }
	// ph = stacks.b;
	// while (ph)
	// {
	// 	ft_printf("b = %d\n", ph->value);
	// 	ph = ph->next;
	// }

	is_sorted(stacks.a, argc - 1/*, (argc - 1)*/);
	free_all(stacks.a);
}