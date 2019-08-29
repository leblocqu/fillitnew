/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: behaudeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:01:48 by behaudeg          #+#    #+#             */
/*   Updated: 2019/06/28 11:05:56 by behaudeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

// int		main(int argc, char **argv)
// {
// 	t_tetri *tetriminios;
// 	char	**tab;

// 	if (argc != 2)
// 	{
// 		ft_putendl("error");
// 		return (-1);
// 	}
// 	if (!(tab = init_checker(argv[1]) == NULL)
// 	{
// 		ft_putendl("error");
// 		return (-1);
// 	}

// 	tetriminios = NULL;
// }

int		main(int argc, char **argv)
{
	char		*str;
	t_tetri		*tetriminios;
	char		**str_split;
	char 		**map;
	t_point		point;

	str = NULL;
	str_split = NULL;
	tetriminios = NULL;
	map = NULL;
	if (argc != 2)
	{
		ft_putendl("error");
		return (-1);
	}
	if ((str = init_checker(argv[1])) == NULL)
	{
		ft_putendl("error");
		return (-1);
	}
	if (!(str_split = ft_strsplit(str, '\n')))
		return (0);
	tetriminios = create_tetris(str, str_split);
	tetriminios = create_coord(tetriminios);
	tetriminios = create_letter(tetriminios);
	point.x = 0;
	point.y = 0;
	aff(tetriminios, g_nb_tetris);
	//
	map = create_map(5);
	aff(tetriminios, g_nb_tetris);
	printf("truc de merde = %d\n", tetriminios[2].coord[1].x);
	printf("truc de merde = %d\n", tetriminios[2].coord[1].y);
	affiche_map(map, 5);
	printf("\n\n\n");
	if (verif_mettre_piece(map, point, tetriminios[2], 5) == 1)
	{
		ft_putendl("c'good!\n");
		map = mettre_piece(map, point, tetriminios, 2);
		affiche_map(map, 5);
		printf("\n\n\n");
	}
	else
		ft_putendl("error sur verif\n");
	//
	return (0);
}
