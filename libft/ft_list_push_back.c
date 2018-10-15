/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:07:25 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:07:58 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_push_back(t_list **begin_list, void *content)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&(*begin_list)->next, content);
		else
			(*begin_list)->next = ft_create_elem(content);
	}
	else
		*begin_list = ft_create_elem(content);
}
