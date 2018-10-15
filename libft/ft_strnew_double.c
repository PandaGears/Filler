/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:33:28 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/17 14:45:40 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_strnew_double(size_t x, size_t y)
{
	char	**tab;
	char	*tab2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	tab2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &tab2[i * x];
		i++;
	}
	return (tab);
}
