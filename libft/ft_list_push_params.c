/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 07:10:38 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/23 07:10:59 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 1;
	if (ac)
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
	return (list);
}
