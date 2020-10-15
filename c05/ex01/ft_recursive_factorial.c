/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:43:15 by alromero          #+#    #+#             */
/*   Updated: 2019/09/19 12:22:53 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int i;
	int number;
	int factorial;

	i = 0;
	number = nb;
	factorial = 1;
	if (number > 0)
	{
		factorial = number * ft_recursive_factorial(number - 1);
	}
	if (nb < 0)
		factorial = 0;
	return (factorial);
}
