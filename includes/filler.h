/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:58:57 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/24 09:41:59 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/includes/libft.h"
# include "filler_struct.h"

void	info_map(t_filler *env);
void	info_user(t_filler *env);

int		take_map(t_filler *env);
int		take_token(t_filler *env, char *line);

int		algo(t_filler *env);

void	position(t_filler *env);

int		try_token(t_filler *env, int i, int j);

void	push_token(t_filler *env);

#endif
