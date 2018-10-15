/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:52:32 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/06 13:54:21 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			*ft_strdupc(const char *s, char c)
{
	char	*str;

	str = ft_strallocc(s, c);
	if (str)
		ft_stpcpyc(str, s, c);
	return (str);
}
