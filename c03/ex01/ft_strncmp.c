/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:25:19 by alromero          #+#    #+#             */
/*   Updated: 2019/09/16 08:36:17 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	int				i;
	unsigned	int k;

	k = 0;
	diff = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (k < n))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
		k++;
	}
	return (diff);
}
