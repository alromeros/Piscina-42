/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:46:39 by alromero          #+#    #+#             */
/*   Updated: 2019/09/10 11:52:50 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int con;

	con = 0;
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			str++;
			con++;
		}
		return (con);
	}
}
