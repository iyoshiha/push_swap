#include "include/push_swap.h"
#include "/Users/iyoshiha/include/libft.h"

t_bi_list	*lst_a()
{
	static t_bi_list	nil;

	return &nil;
}

t_bi_list	*lst_b()
{
	static t_bi_list	nil;

	return &nil;
}

static t_bi_list* init(t_bi_list *a)
{
	a->is_nil = 1;
	a->next = a;
	a->prev = a;
	a->index = NIL;
	return (a);
}

void	bi_ring_lst_init(int **ary)
{
	t_bi_list	*a;
	t_bi_list	*tmp;
	int	len;
	int	i;

	i = 0;
	len = get_len();
	a = init(lst_a());
	init(lst_b());
	while (i < len)
	{
		tmp = bi_ring_lstnew(ary[PS_SORTED_INDEX][i++]);
		if (!tmp)
			err_handle();
		bi_ring_lstadd_back(lst_a(), tmp);
	}
}
