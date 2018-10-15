/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:53:47 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/30 07:22:31 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int		check_token(t_filler *env, int i, int j)
{
	int		setup;
	int		y;
	int		x;

	setup = 0;
	y = 0;
	while (y < env->y_token)
	{
		x = 0;
		while (x < env->x_token)
		{
			if ((env->map[i + y][j + x] == env->user ||
				env->map[i + y][j + x] == env->user + 32)
					&& env->token[y][x] == '*')
				setup++;
			if ((env->map[i + y][j + x] == env->oppon ||
				env->map[i + y][j + x] == env->oppon + 32)
					&& env->token[y][x] == '*')
				return (0);
			x++;
		}
		y++;
	}
	return ((setup == 1) ? 1 : 0);
}

int				try_token(t_filler *env, int i, int j)
{
	if (i + env->y_token > env->y_map)
		return (0);
	else if (j + env->x_token > env->x_map)
		return (0);
	else
		return (check_token(env, i, j));
}
