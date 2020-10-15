/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:35:32 by alromero          #+#    #+#             */
/*   Updated: 2019/09/19 10:05:41 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int number;

	number = 0;
	if (index <= 1 && index >= 0)
		number = index;
	else if (index < 0)
		number = -1;
	else if (index > 1)
	{
		number = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (number);
}
