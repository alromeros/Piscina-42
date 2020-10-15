/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:48:06 by alromero          #+#    #+#             */
/*   Updated: 2019/09/09 10:32:29 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int contador;
	int exp;

	exp = 1;
	(nb == -2147483648) && write(1, "-2", 2) && (nb = 147483648);
	contador = nb;
	if (contador < 0)
	{
		contador = (contador * -1);
		nb = (nb * -1);
		write(1, "-", 1);
	}
	while (contador > 9)
	{
		contador = (contador / 10);
		exp = exp * 10;
	}
	while (exp >= 1)
	{
		contador = (nb / exp) + '0';
		write(1, &contador, 1);
		nb = (nb % exp);
		exp = (exp / 10);
	}
}
