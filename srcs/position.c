/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:54:01 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/30 12:43:08 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void		position(t_filler *env)
{
	int		i;
	int		j;

	i = 0;
	env->oppon = (env->user == 'O') ? 'X' : 'O';
	while (i < env->y_map)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (env->map[i][j] == env->oppon)
			{
				env->o_pos_x = j;
				env->o_pos_y = i;
			}
			if (env->map[i][j] == env->user)
			{
				env->u_pos_x = j;
				env->u_pos_y = i;
			}
			j++;
		}
		i++;
	}
	env->algo = (env->o_pos_y > env->u_pos_y) ? 1 : 0;
}
