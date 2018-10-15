/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:14:10 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:14:36 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	return (ft_list_size(begin_list->next) + 1);
}
