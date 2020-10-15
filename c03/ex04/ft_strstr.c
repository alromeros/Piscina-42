/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:27:01 by alromero          #+#    #+#             */
/*   Updated: 2019/09/16 10:37:45 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*nueva;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[j] != '\0')
		j++;
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			nueva = str + i;
			if (ft_strncmp(&str[i], &to_find[k], j) == 0)
				return (nueva);
		}
		i++;
	}
	return (0);
}

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
