/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:50:25 by alromero          #+#    #+#             */
/*   Updated: 2019/09/12 09:56:18 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 'Z' && *str >= 'A')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
