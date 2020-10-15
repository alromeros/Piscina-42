/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:03:07 by alromero          #+#    #+#             */
/*   Updated: 2019/09/20 08:54:59 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int i;
	int numero;

	i = 0;
	numero = nb;
	if (power > 0)
	{
		if (power > 1)
		{
			numero = nb * ft_recursive_power(nb, power - 1);
		}
		return (numero);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", ft_recursive_power(-1815, -1606));
}