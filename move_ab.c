#include "push_swap.h"

t_stacks    ss(t_stacks stacks)
{
    stacks.a = sa(stacks.a, 0);
    stacks.b = sb(stacks.b, 0);
    ft_printf("ss\n");
    return (stacks);
}

t_stacks    rr(t_stacks stacks)
{
    stacks.a = ra(stacks.a, 0);
    stacks.b = rb(stacks.b, 0);
    ft_printf("rr\n");
    return (stacks);
}

t_stacks    rrr(t_stacks stacks)
{
    stacks.a = rra(stacks.a, 0);
    stacks.b = rrb(stacks.b, 0);
    ft_printf("rrr\n");
    return (stacks);
}