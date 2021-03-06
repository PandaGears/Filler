/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler_struct.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:59:04 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/24 09:42:04 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_STRUCT_H
# define FILLER_STRUCT_H

# include "filler.h"

typedef struct	s_filler
{
	char	user;
	char	oppon;
	int		x_map;
	int		y_map;
	char	**map;
	int		x_token;
	int		y_token;
	char	**token;
	int		u_pos_x;
	int		u_pos_y;
	int		o_pos_x;
	int		o_pos_y;
	int		push_x;
	int		push_y;
	int		algo;
	int		ko;
	int		gameover;
}				t_filler;

#endif
