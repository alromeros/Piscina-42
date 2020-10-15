/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulldemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:11:31 by fulldemo          #+#    #+#             */
/*   Updated: 2019/09/25 20:16:13 by fulldemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

char	*ft_reader(char **argv)
{
	int		i;
	int		fd;
	char	text;
	char	*file;

	i = 0;
	file = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, &text, 1))
			i++;
		file = (char*)malloc(sizeof(char) * (i + 1));
		if (file == NULL)
			return (0);
		i = 0;
		close(fd);
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (0);
		while (read(fd, &text, 1))
			file[i++] = text;
		file[i] = '\0';
	}
	return (file);
}

char	*ft_legend(char *argv)
{
	int		i;
	char	*legend;

	i = 0;
	while (argv[i] != '\n')
		i++;
	legend = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (argv[i] != '\n')
	{
		legend[i] = argv[i];
		i++;
	}
	legend[i] = '\0';
	return (legend);
}

void	ft_fill(char **rows, char *file, int rows_nbr)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (file[k] != '\n')
		k++;
	k++;
	i = 0;
	while (i < rows_nbr)
	{
		while (file[k] != '\n')
		{
			rows[i][j] = file[k];
			j++;
			k++;
		}
		rows[i][j] = '\0';
		k++;
		j = 0;
		i++;
	}
}

char	**ft_row(char *file, int columns_nbr, int rows_nbr)
{
	int		i;
	char	**rows;

	i = 0;
	rows = (char **)malloc(sizeof(char*) * (rows_nbr));
	if (rows == NULL)
		return (0);
	while (i < rows_nbr)
	{
		rows[i] = (char *)malloc(sizeof(char) * (columns_nbr + 1));
		if (rows[i] == NULL)
			return (0);
		i++;
	}
	ft_fill(rows, file, rows_nbr);
	return (rows);
}

void	print_char_table(char **tabla, int rows_nbr, int columns_nbr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < rows_nbr)
	{
		while (j < columns_nbr)
		{
			write(1, &tabla[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
