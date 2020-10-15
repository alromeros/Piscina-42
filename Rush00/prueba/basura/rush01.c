/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:50:34 by alromero          #+#    #+#             */
/*   Updated: 2019/09/08 19:23:24 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c, int d)
{
    int salto;
    salto = 10;
    
    while (d > 0)
    {
        write(1, &a, 1);
        d--;
        while (d != 1 && d > 0)
        {
            write(1, &b, 1);
            d--;
        }
        while (d == 1)
        {
            write(1, &c, 1);
            d--;
        } 
        write(1, &salto, 1);
    }
}

void rush(int x, int y)
{
    int altura; 
    altura = 0;

    while (altura++ < y)
    {
        if (altura == 1)
        {
            ft_putchar('A', 'B', 'C', x);
        }
        else if (altura > 1 && altura < y)
        {
            ft_putchar('B', ' ', 'B', x);
        }
        else 
        ft_putchar('C', 'B', 'A', x);
    }
}


int main()
{
    rush(9, 1);
}