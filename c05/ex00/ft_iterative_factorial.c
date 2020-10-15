/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:24:29 by alromero          #+#    #+#             */
/*   Updated: 2019/09/19 12:21:04 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int			i;
	int			number;
	long	int factorial;
	long	int aux;

	i = 1;
	aux = 1;
	number = nb;
	if (number == 0)
		factorial = 1;
	while (number > 0)
	{
		number--;
		factorial = i * aux;
		i++;
		aux = factorial;
	}
	return (factorial);
}
