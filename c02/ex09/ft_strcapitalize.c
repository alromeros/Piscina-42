/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 07:42:23 by alromero          #+#    #+#             */
/*   Updated: 2019/09/12 20:44:20 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i = 0;
	while (str[i++] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z')) && (str[i - 1] < '0' ||
		(str[i - 1] > '9' && str[i - 1] < 'A') ||
		(str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return (str);
}
