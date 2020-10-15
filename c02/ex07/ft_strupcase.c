/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:00:34 by alromero          #+#    #+#             */
/*   Updated: 2019/09/12 12:47:02 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] <= 'z' && str[c] >= 'a')
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}