/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:18:15 by alromero          #+#    #+#             */
/*   Updated: 2019/09/10 13:15:49 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int number;
	int half;

	cont = 0;
	half = (size / 2);
	while (cont++ < half)
	{
		number = *tab;
		*tab = *(tab + (size - cont));
		*(tab + (size - cont)) = number;
		tab++;
		size--;
	}
}
