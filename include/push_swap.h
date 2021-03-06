#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "libft.h"
#define err 0

#define NIL 0xffffffff
# define IS_NIL 1
#define PS_ARG_NUM 0
#define PS_SORTED_NUM 1
#define PS_SORTED_INDEX 2

typedef struct	s_stack
{
	t_bi_list	*a;
	t_bi_list	*b;
	size_t		len;
	int			*num;
}				t_stack;

void	swap(t_bi_list *nil);
void	push(t_bi_list *dst_nil, t_bi_list *src_nil);
void	rotate(t_bi_list *nil);
void	reverse_rotate(t_bi_list *nil);
void	err_handle(void);
void	init_len(int len);
int	get_len(void);
int *len_ptr(void);
void	set_index(int ***num_info, int *num);
int	*create_num_ary(int len, char **num_str);
t_bi_list	*lst_a(void);
t_bi_list	*lst_b(void);
void	init_bi_ring_lst(int **ary);
int ft_mod_atoi(const char *str);

#endif
