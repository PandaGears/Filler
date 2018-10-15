/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:12:34 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:13:22 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

	list = begin_list;
	last = NULL;
	if (!(list))
		list = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = last;
		last = list;
		list = tmp;
	}
	begin_list = last;
}
