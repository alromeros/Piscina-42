/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:31:14 by fulldemo          #+#    #+#             */
/*   Updated: 2019/09/25 20:43:06 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_tabla
{
	char		**tab;
	char		*legend;
	int			columns;
	int			rows;
	int			**tab_int;
}				t_tabla;
char			*ft_reader(char **argv);
char			*ft_legend(char *argv);
void			ft_fill(char **rows, char *file, int rows_nbr);
char			**ft_row(char *file, int columns_nbr, int rows_nbr);
void			print_char_table(char **tabla, int rows_nbr, int columns_nbr);
int				nb_rows(char *legend);
int				nb_columns(char *file);
int				**tab_calc(int columns_nbr, int rows_nbr);
int				**ft_change(char **tab, char *l, int rows, int columns);
int				ft_corner(int a, int b, int c, int nbr);
int				**corners(int **tab_int, int rows, int columns);
int				max(int **tab, int rows, int columns);
char			**tab_max(t_tabla dat, int i, int j);
char			**result(t_tabla dat);
#endif
