/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:52:55 by alromero          #+#    #+#             */
/*   Updated: 2019/09/19 09:08:31 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		ft_is_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int numero;
	int i;

	numero = nb;
	i = 0;
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

int		ft_is_prime(int nb)
{
	int i;
	int numero;

	numero = ft_sqrt(nb);
	i = 0;
	while ((nb % numero) != 0)
	{
		numero--;
	}
	if (numero == 1)
		return (1);
	return (0);
}

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i != nb && i < 46341)
	{
		i++;
		if (i * i > nb)
		{
			break ;
		}
	}
	return (i);
}
