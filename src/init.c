/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: behaudeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:29:39 by behaudeg          #+#    #+#             */
/*   Updated: 2019/07/12 14:29:42 by behaudeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_tetri		*create_letter(t_tetri *t)
{
	int		nb_t;
	char	l;

	nb_t = 0;
	l = 'A' - 1;
	while (nb_t < g_nb_tetris)
	{
		l++;
		t[nb_t].lettre = l;
		nb_t++;
	}
	return (t);
}