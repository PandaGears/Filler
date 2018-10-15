/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:44:23 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/30 17:44:25 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s2;
	size_t	i;

	s2 = dst;
	i = -1;
	while (++i < len)
		if (*src)
			*s2++ = *src++;
		else
			while (i++ < len)
				*s2++ = '\0';
	return (dst);
}
