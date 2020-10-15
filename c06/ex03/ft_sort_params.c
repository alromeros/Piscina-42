/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:39:55 by alromero          #+#    #+#             */
/*   Updated: 2019/09/19 17:20:39 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char argv[], char arg[]);

char	**sort_tab(char **argv, int argc);

void	ft_sort_tab(char **argv, int size);

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	ft_sort_tab(argv, argc);
	while (j < argc)
	{
		while (*argv[j] != '\0')
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	ft_sort_tab(char **argv, int size)
{
	int		counter;
	char	*new;
	int		i;
	int		l;

	counter = 0;
	while (counter++ <= size)
	{
		i = 1;
		while (i < (size - counter))
		{
			l = i + 1;
			if (ft_strcmp(argv[i], argv[l]) > 0)
			{
				new = (argv[l]);
				argv[l] = argv[i];
				argv[i] = new;
			}
			i++;
		}
	}
}

int		ft_strcmp(char *argv, char *arg)
{
	int j;
	int diff;

	diff = 0;
	j = 0;
	while (argv[j] != '\0' || arg[j] != '\0')
	{
		if (argv[j] != arg[j])
		{
			diff = argv[j] - arg[j];
			return (diff);
		}
		argv++;
		arg++;
	}
	return (diff);
}
