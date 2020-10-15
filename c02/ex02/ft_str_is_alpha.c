/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:24:40 by alromero          #+#    #+#             */
/*   Updated: 2019/09/11 16:12:08 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= 'z' && *str >= 'a') || (*str <= 'Z' && *str >= 'A'))
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