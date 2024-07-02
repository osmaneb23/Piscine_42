/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:24:41 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:11:48 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_line(int *tab, int *arg_atoi, int line);
void	ft_boucle(int *arg_atoi, int i, int **position);
int		check_column(int **position, int *arg_atoi);
void	print_tableau(int **position);

void	skycrapper_verif(int **position, int *tab, int *arg_atoi, int i)
{
	int	k;

	k = 0;
	if (check_line(tab, arg_atoi, i) == 1)
	{
		while (k < 4)
		{
			position[i][k] = tab[k];
			k++;
		}
		ft_boucle(arg_atoi, i + 1, position);
	}
}

void	skyscrapper(int **position, int *tab, int *arg_atoi, int i)
{
	int	j;

	j = 0;
	if (i < 3)
		skycrapper_verif(position, tab, arg_atoi, i);
	else if (check_line(tab, arg_atoi, 3) == 1)
	{
		while (j < 4)
		{
			position[3][j] = tab[j];
			j++;
		}
		if (check_column(position, arg_atoi) == 1)
			print_tableau(position);
	}
}
