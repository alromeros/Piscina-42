/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:37:33 by alromero          #+#    #+#             */
/*   Updated: 2019/09/26 15:59:12 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rev_int_tab(int *tab, int size)
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
	return (tab);
}

char	hexa(char *str)
{
	int i;
	char number[10];
	long int residuo;
	long int cociente;
	char hexadecimal[16];
	
	hexadecimal[16]= "0123456789ABCDEF";
	cociente = *str;
	i = 0;
	while (cociente > 10)
	{
		residuo = cociente % 16;
		number[i++] = hexadecimal[residuo];
		cociente = cociente / 16;
	}
	return (ft_rev_int_tab(&number, i));
}

void	ft_putstr_non_printable(char *str)
{	
	while (*str != 0)
	{
		if (*str < 32 || *str == 127)
		{	
			write(1, "\\", 1);
			write(1, hexa(str), 1);
			str++;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
}
