/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:55:21 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 06:55:46 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if ((*cmp)(begin_list->content, content_ref) == 0)
		f(begin_list->content);
	if (begin_list->next)
		ft_list_foreach_if(begin_list->next, f, content_ref, cmp);
}
