/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqdupc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:57:06 by tradlof           #+#    #+#             */
/*   Updated: 2018/05/22 16:58:25 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_strallocc(*s1, c);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
