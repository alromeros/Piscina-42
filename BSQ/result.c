/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:21:01 by fulldemo          #+#    #+#             */
/*   Updated: 2019/09/25 20:27:55 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int		**corners(int **tab_int, int rows, int columns)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < rows)
	{
		j = 1;
		while (j < columns)
		{
			tab_int[i][j] = ft_corner(tab_int[i][j - 1], tab_int[i - 1][j],
			tab_int[i - 1][j - 1], tab_int[i][j]);
			j++;
		}
		i++;
	}
	return (tab_int);
}

int		max(int **tab, int rows, int columns)
{
	int i;
	int j;
	int m;

	i = 0;
	j = 0;
	m = 0;
	while (i < rows)
	{
		while (j < columns)
		{
			if (tab[i][j] > m)
				m = tab[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (m);
}

char	**tab_max(t_tabla dat, int i, int j)
{
	int m;
	int n;
	int k;

	m = max(dat.tab_int, dat.rows, dat.columns);
	n = m;
	k = m;
	while (n > 0)
	{
		while (m > 0)
		{
			dat.tab[i][j--] = dat.legend[2];
			m--;
		}
		m = m + k;
		j = j + k;
		n--;
		i--;
	}
	return (dat.tab);
}

char	**result(t_tabla dat)
{
	int i;
	int j;
	int m;

	i = 0;
	j = 0;
	m = max(dat.tab_int, dat.rows, dat.columns);
	while (i++ < dat.rows)
	{
		while (j < dat.columns)
		{
			if (dat.tab_int[i][j] == m)
			{
				dat.tab = tab_max(dat, i, j);
				m++;
			}
			else if (dat.tab_int[i][j] == 0)
				dat.tab[i][j] = dat.legend[1];
			else
				dat.tab[i][j] = dat.legend[0];
			j++;
		}
		j = 0;
	}
	return (dat.tab);
}
