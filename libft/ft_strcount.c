/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:35:51 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/06 13:52:15 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcount(char *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		++count;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}
