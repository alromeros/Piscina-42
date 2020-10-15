/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:19:30 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 18:30:34 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int array[size];
	int counter;
	int copy;
	int counter2;
	int new;

	counter = 0;
	while (counter++ <= size)
	{
		counter2 = 0;
		while (counter2 < (size - counter))
		{
			if (*(tab + counter2) > (*(tab + counter2 + 1)))
			{
				new = *(tab + counter2);
				*(tab + counter2) = *(tab + counter2 + 1);
				*(tab + counter2 + 1) = new;
			}
			counter2++;
		}
	}
}

