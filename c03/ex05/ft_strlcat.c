/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:32:12 by alromero          #+#    #+#             */
/*   Updated: 2019/09/16 17:32:54 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				strilen(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	i;
	unsigned	int	lenght1;
	unsigned	int	lenghtsrc;

	lenght1 = strilen(dest);
	lenghtsrc = strilen(src);
	i = 0;
	if (size == 0)
	{
		return (lenght1);
	}
	while (lenght1 < (size - 1))
	{
		dest[lenght1] = src[i];
		lenght1++;
		i++;
	}
	if (dest[size - 1] != '\0')
	{
		return (lenght1 + size);
	}
	else
		return (lenght1 + strilen(src));
}

int				strilen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
