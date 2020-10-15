/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:04:50 by alromero          #+#    #+#             */
/*   Updated: 2019/09/15 21:13:34 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstring(char *str);

int		errordetect(char *str);

void	printarray(char *tabla);

char	*sky(char *argv);

char	*four(char *str);

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 2)
	{
		if (errordetect(argv[1]) == 0)
		{
			printarray(argv[1]);
		}
	}
}
