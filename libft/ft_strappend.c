/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:46:29 by tradlof           #+#    #+#             */
/*   Updated: 2018/05/25 07:48:49 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strappend(char *src, char c)
{
	char	*str;
	char	*itr;

	str = malloc(sizeof(char *) * (ft_strlen(src) + 2));
	if (str)
	{
		itr = ft_stpcpy(str, src);
		*itr++ = c;
		*itr = '\0';
		free(src);
	}
	return (str);
}
