/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:14:52 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:15:16 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_sort(t_list *lst, int (*cmp)())
{
	void	*tempo;
	t_list	*overflow;

	overflow = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			tempo = lst->content;
			lst->content = lst->next->content;
			lst->next->content = tempo;
			lst = overflow;
		}
		else
			lst = lst->next;
	}
	lst = overflow;
	return (lst);
}
