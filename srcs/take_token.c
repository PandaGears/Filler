/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:54:38 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/24 14:47:32 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_token(t_filler *env, char *line)
{
	int		n;
	int		i;

	n = 6;
	i = 0;
	env->y_token = ft_atoi(&line[6]);
	while (ft_isdigit(line[n]))
		n++;
	n++;
	env->x_token = ft_atoi(&line[n]);
	if (!env->token)
		if (!(env->token = ft_strnew_double(env->y_token, env->x_token)))
			return (-1);
	while (i < env->y_token)
	{
		get_next_line(0, &line);
		env->token[i] = ft_strdup(line);
		i++;
	}
	return (0);
}
