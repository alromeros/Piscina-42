/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 07:28:07 by alromero          #+#    #+#             */
/*   Updated: 2019/09/10 09:45:10 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = 47;
	while (x++ < 55)
	{
		y = x;
		while (y++ < 56)
		{
			z = y;
			while (z++ < 57)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != '7' || y != '8' || z != '9')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int main()
{
	ft_print_comb();
}