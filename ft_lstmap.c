/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantia <josantia@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:39:17 by josantia          #+#    #+#             */
/*   Updated: 2024/04/19 22:22:04 by josantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*node;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		node = f(lst->content);
		tmp = ft_lstnew(node);
		if (!tmp)
		{
			del(node);
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst ->next;
	}
	return (ret);
}
