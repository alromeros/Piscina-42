/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:45:10 by alromero          #+#    #+#             */
/*   Updated: 2019/09/15 19:21:29 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <unistd.h>

int *rush(int *argv)
{
	int *tabla;
	//*tabla = (int *)malloc(sizeof(tabla)); 
	return (0);
}


char *separar(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != 32 && (argv[i] > '0' && argv[i] <= '4'))
		{
		return argv;
		}
		i++;
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	int j;
	int i;
	int *arr;
	char rascacielos[16];

	j = 0;
	i = 0;
	if (argc == 2)
	{
		while (j < 16)
		{
		rascacielos[j] = separar(*argv);
		j++;
		}
	}
}

 