/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:49:05 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 17:35:43 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int number;

	i = 0;
	number = nb;
	if (power > 0)
	{
		while (power > 1)
		{
			nb = number * nb;
			power--;
		}
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
