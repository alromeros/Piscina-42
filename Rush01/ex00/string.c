/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:05:07 by alromero          #+#    #+#             */
/*   Updated: 2019/09/15 21:17:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printarray(char *tabla)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tabla[i] != '\0')
	{
		if (j < 7)
		{
			write(1, &tabla[i], 1);
		}
		else if (j == 7)
		{
			if (tabla[i])
			{
				i++;
				write(1, "\n", 1);
				write(1, &tabla[i], 1);
				j = 0;
			}
		}
		i++;
		j++;
	}
}

char	*sky(char *argv)
{
	int		i;
	int		j;
	char	*skyscraper;

	skyscraper = argv;
	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
		{
			skyscraper[j] = argv[i];
			j++;
		}
		i++;
	}
	skyscraper[j] = '\0';
	return (skyscraper);
}

void	putstring(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

char	*four(char *str)
{
	char	tabla[4][4];
	int		i;
	int		y;
	int		x;
	int		w;

	i = 0;
	y = 0;
	x = 0;
	w = 0;
	while (x <= 3)
	{
		while (y <= 3)
		{
			tabla[x][y] = str[i];
			y++;
			i++;
		}
		y = 0;
		x++;
	}
	return (str);
}
