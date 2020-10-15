/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:48:36 by alromero          #+#    #+#             */
/*   Updated: 2019/09/26 16:12:03 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_rev_int_tab(char *tab, int size);

char		*ft_calc(int flag, int nbr, char *base);

int			detector_base(char *str);

long	int	is_negative(long int nbr);

int			detector_base(char *str)
{
	int i;
	int k;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		i++;
		while (k < i)
		{
			if (str[k] == str[i])
				flag = 1;
			k++;
		}
		if (((str[i] < 'a' && str[i] > 'z')
		|| (str[i] > '9' && str[i] < '0')) && str[i] != '\0')
			flag = 1;
	}
	if ((i == 1 || i == 0) || (flag == 1))
		return (0);
	else
		return (i);
}

char		*ft_calc(int flag, int nbr, char *base)
{
	char		inv[100];
	long	int r;
	long	int i;
	char		*a;
	long	int num;

	i = 0;
	num = nbr;
	if (flag != 0)
		num = is_negative(num);
	if (nbr == 0)
		inv[i] = base[0];
	while (num > 0 && flag != 0)
	{
		r = num % flag;
		inv[i] = base[r];
		num = num / flag;
		i++;
		inv[i] = '\0';
	}
	if (flag == 0)
		inv[0] = '\0';
	a = inv;
	return (a);
}

void		ft_rev_int_tab(char *tab, int size)
{
	int		cont;
	char	number;
	int		half;

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

long int	is_negative(long int nbr)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
		return (nbr);
	}
	return (nbr);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	int		k;
	char	*nun;

	i = detector_base(base);
	j = 0;
	k = 0;
	nun = ft_calc(i, nbr, base);
	while (nun[k] != '\0')
		k++;
	ft_rev_int_tab(nun, k);
	while (nun[j] != '\0')
	{
		write(1, &nun[j], 1);
		j++;
	}
}

int main()
{
	ft_putnbr_base(24, "1203456789");
}