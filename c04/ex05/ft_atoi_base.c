/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:20:29 by alromero          #+#    #+#             */
/*   Updated: 2019/09/18 10:25:05 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

int		signo(char *str);

int		ft_putnbr_int(char *str, int n);

int		ft_atoi_base(char *str, char *base)
{
	int			i;
	int			k;
	char		*number;
	long int	entero;

	i = 0;
	k = 0;
	number = 0;
	entero = 0;
	while (str[i] > '9' || str[i] < '0')
	{
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			entero = (entero * 10) + str[i] - 48;
			i++;
		}
		entero = signo(str) * entero;
		if (entero < -2147483648 || entero > 2147483647)
			return (0);
	}
	return (entero);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		signo(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && (str[i] > '9' || str[i] < '0'))
	{
		while (str[i] == '-')
		{
			j++;
			i++;
		}
		i++;
	}
	if ((j % 2) != 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
