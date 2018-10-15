/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:44:12 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/01 14:25:14 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_stralloc(const char *s)
{
	return (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s)
		return (NULL);
}
