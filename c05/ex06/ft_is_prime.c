/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:14:47 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 17:39:33 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	int numero;

	numero = nb;
	i = 0;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb < 0)
		return (0);
	else if (nb > 2)
		while (nb-- > 2)
			if ((numero % nb) == 0)
				return (0);
	return (1);
}
