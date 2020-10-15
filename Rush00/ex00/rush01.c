/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:16:29 by alromero          #+#    #+#             */
/*   Updated: 2019/09/08 20:17:59 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char l);

void	rush(int x, int y)
{
	int f;
	int c;

	c = 0;
	f = 0;
	if (f <= y && c <= x)
	{
		while (f++ < y)
		{
			c = 0;
			while (c++ < x)
			{
				if (((f == 1) && (c == 1))
				|| ((f == y) && (c == x) && (f > 1) && (c > 1)))
					ft_putchar('/');
				else if (((f == 1) && (c == x)) || ((f == y) && (c == 1)))
					ft_putchar('\\');
				else if ((f == 1 || f == y) || (c == 1 || c == x))
					ft_putchar('*');
				else if ((f != 1 || f != y) && (c != 1 || c != x))
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
