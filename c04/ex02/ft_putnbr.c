/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 07:59:28 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 09:58:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int copia;

	copia = nb;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(1, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr(copia / 10);
		ft_putchar((copia % 10) + '0');
	}
	else
		ft_putchar(copia + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
