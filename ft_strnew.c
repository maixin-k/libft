#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	str->content = content;
	result->next = NULL;
	return (str);
}
