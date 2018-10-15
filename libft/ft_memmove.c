/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 12:56:08 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/30 12:56:11 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	src1 = (char *)src;
	dst1 = (char *)dst;
	i = -1;
	if (src1 < dst1)
		while ((int)(--len) >= 0)
			*(dst1 + len) = *(src1 + len);
	else
		while (++i < len)
			*(dst1 + i) = *(src1 + i);
	return (dst);
}
