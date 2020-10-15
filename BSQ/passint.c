/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:17:50 by fulldemo          #+#    #+#             */
/*   Updated: 2019/09/25 20:20:19 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int		nb_rows(char *legend)
{
	int i;
	int n;
	int j;
	int k;

	i = 0;
	n = 0;
	j = 0;
	while (legend[i] >= '0' && legend[i] <= '9')
	{
		n = n * 10 + legend[i] - '0';
		i++;
	}
	k = i + 3;
	while (j < k)
	{
		legend[j] = legend[i];
		i++;
		j++;
	}
	legend[j] = '\0';
	return (n);
}

int		nb_columns(char *file)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (file[i] != '\n')
		i++;
	i++;
	while (file[i] != '\n')
	{
		i++;
		n++;
	}
	return (n);
}

int		**tab_calc(int columns_nbr, int rows_nbr)
{
	int		i;
	int		**tab_int;

	i = 0;
	tab_int = (int **)malloc(sizeof(int*) * (rows_nbr));
	if (tab_int == NULL)
		return (0);
	while (i < rows_nbr)
	{
		tab_int[i] = (int *)malloc(sizeof(int) * (columns_nbr + 1));
		if (tab_int[i] == NULL)
			return (0);
		i++;
	}
	return (tab_int);
}

int		**ft_change(char **tab, char *l, int rows, int columns)
{
	int i;
	int j;
	int k;
	int **tab_int;

	i = 0;
	j = 0;
	k = 0;
	tab_int = tab_calc(columns, rows);
	while (i < rows)
	{
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == l[1])
				tab_int[i][j] = 0;
			else
				tab_int[i][j] = 1;
			j++;
		}
		j = 0;
		i++;
	}
	return (tab_int);
}

int		ft_corner(int a, int b, int c, int nbr)
{
	if (nbr != 0)
	{
		if (a <= b && a <= c)
			return (a + nbr);
		else if (b <= a && b <= c)
			return (b + nbr);
		else if (c <= a && c <= b)
			return (c + nbr);
		else
			return (nbr);
	}
	return (nbr);
}
