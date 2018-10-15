/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:45:46 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/02 06:26:59 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	while (*s && ft_isspace(*s))
		s++;
	len = ft_strlen(s) == 0 ? 0 : ft_strlen(s) - 1;
	if (len > 0)
	{
		while (ft_isspace(s[len]))
			len--;
		len++;
	}
	if (!(ret = (char *)malloc(sizeof(*ret) * len + 1)))
		return (NULL);
	ret[len] = '\0';
	i = 0;
	while (len--)
		ret[i++] = *s++;
	return (ret);
}
