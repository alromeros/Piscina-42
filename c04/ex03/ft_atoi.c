/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:27:03 by alromero          #+#    #+#             */
/*   Updated: 2019/09/24 16:20:13 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int			i;
	int			entero;
	int			signo;

	i = 0;
	entero = 0;
	signo = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -signo;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		entero = (entero * 10) + str[i] - 48;
		i++;
	}
	return (entero * signo);
}
