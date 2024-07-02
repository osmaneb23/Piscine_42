/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:08:33 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 22:08:06 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_boucle(int *arg_atoi, int i, int **position);
int		*arg_atoi(char *argv);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	**position;

	(void)argc;
	i = 0;
	j = 0;
	k = 0;
	position = malloc(4 * sizeof(int *));
	while (k < 4)
	{
		position[k] = malloc(4 * sizeof(int));
		k++;
		j = 0;
		while (j < 4)
		{
			position[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_boucle(arg_atoi(argv[1]), 0, position);
	return (0);
}
