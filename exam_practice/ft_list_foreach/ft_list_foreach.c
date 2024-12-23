
// #include "ft_list.h"

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

//(*f)(begin_list->data)で各ノードのデータを関数に渡す
//begin_listを更新