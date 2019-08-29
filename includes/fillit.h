/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: behaudeg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:50:03 by behaudeg          #+#    #+#             */
/*   Updated: 2019/06/25 14:50:06 by behaudeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

int g_nb_tetris;
# define BUFF_SIZE 1

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_tetri
{
	char		lettre;
	char		tetri[4][5];
	t_point		coord[4];
}				t_tetri;

t_tetri			*create_tetriss(char **str_split, t_tetri *test, char *str);
t_tetri			*create_tetris(char *str, char **str_split);
t_tetri			*create_coordd(t_tetri *test, int j, int k);
t_tetri			*create_coord(t_tetri *test);
t_tetri			*create_letter(t_tetri *tetri);
void			aff(t_tetri *test, int c_tetris);
void			free_split(char **str_split);
int				count_tetris(char *str);
int				checker(char *str);
int				line_checker(char *str);
int				check_char(char *str);
int				check_char2(char *str);
int				check_char3(char *str, int i, int hash, int points);
int				shapo(char *str);
int				shapoo(int i, char *str, int test, int link);
char			*init_checker(char *argv);
char			**create_map(int size);
char			**init_map(char **map, int size);
int     		verif_mettre_piece(char **map, t_point point, t_tetri t, int size);
char    		**mettre_piece(char **map, t_point point, t_tetri *t, int nb_tetris);
void	        affiche_map(char **map, int size);
void			free_map(char **map);
char			**backtrack(t_tetri *t, int index, t_point point);

#endif
