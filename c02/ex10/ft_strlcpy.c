/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:46:57 by alromero          #+#    #+#             */
/*   Updated: 2019/09/13 10:21:51 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *new;
	char *l;

	new = dest + size;
	l = src;
	while (*l != '\0' && dest < new)
	{
		*dest++ = *l++;
	}
	if  (dest < new)
	{
		*dest = 0;
	}
	else if (size > 0)
	{
		dest[-1] = 0;
	}
	while (*l != '\0')
	{
		l++;
	}
	return (l - src);
}
