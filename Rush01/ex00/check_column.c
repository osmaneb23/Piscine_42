/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_column.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:22:29 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:07:11 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_column_up(int **position, int j)
{
	int	i;
	int	sommeup;
	int	c;

	sommeup = 1;
	c = position[0][j];
	i = 0;
	while (i < 3)
	{
		if (c < position[i + 1][j])
		{
			c = position[i + 1][j];
			sommeup++;
		}
		i++;
	}
	return (sommeup);
}

int	check_column_down(int **position, int j)
{
	int	i;
	int	sommedown;
	int	d;

	sommedown = 1;
	d = position[3][j];
	i = 0;
	while (i < 3)
	{
		if (d < position[3 - (i + 1)][j])
		{
			d = position[3 - (i + 1)][j];
			sommedown++;
		}
		i++;
	}
	return (sommedown);
}

int	check_number(int **position, int j)
{
	int	i;
	int	k;

	i = 0;
	while (i < 3)
	{
		k = i + 1;
		while (k < 4)
		{
			if (position[i][j] == position[k][j] && position[i][j] != 0)
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	check_column(int **position, int *arg_atoi)
{
	int	j;
	int	i;
	int	k;
	int	sommeup;
	int	sommedown;

	j = 0;
	while (j < 4)
	{
		sommeup = check_column_up(position, j);
		sommedown = check_column_down(position, j);
		if (!check_number(position, j))
			return (0);
		if (sommeup != arg_atoi[j] || sommedown != arg_atoi[4 + j])
			return (0);
		j++;
	}
	return (1);
}
