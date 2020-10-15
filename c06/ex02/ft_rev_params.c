/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:32:30 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 12:38:26 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (*argv[j] != '\0')
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		write(1, "\n", 1);
		j--;
	}
}
