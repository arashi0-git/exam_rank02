
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;
	t_list	*temp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	current = *begin_list;
	prev = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = current->next;
			else
				prev->next = current->next;
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}
