/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:19:59 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:09:41 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*arg_atoi(char *argv)
{
	int	i;
	int	*tab;
	int	*null;

	tab = malloc(sizeof(int) * 16);
	null = malloc(sizeof(int) * 16);
	i = 0;
	while (argv[i])
	{
		if ((i % 2 == 0) && argv[i] >= '1' && argv[i] <= '4')
			tab[i / 2] = argv[i] - 48;
		else if ((i % 2 == 0) && !(argv[i] >= '1' && argv[i] <= '4'))
			return (null);
		if (i % 2 == 1 && argv[i] != ' ')
			return (null);
		i++;
	}
	return (tab);
}
