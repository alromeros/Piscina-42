/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:28:17 by fulldemo          #+#    #+#             */
/*   Updated: 2019/09/25 21:06:38 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int	main(int argc, char **argv)
{
	t_tabla		dat;
	char		*file;
	char		*leg;

	file = ft_reader(argv);
	leg = ft_legend(file);
	dat.rows = nb_rows(leg);
	dat.columns = nb_columns(file);
	dat.tab = ft_row(file, dat.columns, dat.rows);
	dat.legend = leg;
	ft_change(dat.tab, leg, dat.rows, dat.columns);
	dat.tab_int = ft_change(dat.tab, dat.legend, dat.rows, dat.columns);
	dat.tab_int = corners(dat.tab_int, dat.rows, dat.columns);
	dat.tab = result(dat);
	print_char_table(dat.tab, dat.rows, dat.columns);
	return (argc);
}
