#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack{
	int				value;
	int				ind;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
}	t_stacks;

t_stack		*make_a(char **str, int n);
void		free_all(t_stack *a);
int			is_sorted(t_stack *a, int i/*, int n*/);

t_stack		*sa(t_stack *a, int i);
t_stack		*ra(t_stack *a, int i);
t_stack		*rra(t_stack *a, int i);
t_stacks	pa(t_stacks stacks);
t_stack		*sb(t_stack *b, int i);
t_stack		*rb(t_stack *b, int i);
t_stack		*rrb(t_stack *b, int i);
t_stacks	pb(t_stacks stacks);
t_stacks    ss(t_stacks stacks);
t_stacks    rr(t_stacks stacks);
t_stacks    rrr(t_stacks stacks);

void		small(t_stacks s, int n);
void		radix(t_stacks s, int n);

int			ft_printf(const char *str, ...);
int			ft_isdigit(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *nptr);
size_t		ft_strlen(const char *s);

#endif