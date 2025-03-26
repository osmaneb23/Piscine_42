/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boucle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:24:03 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:10:30 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check(int *tab, int i, int **position, int *arg_atoi);

void	ft_tab(int *tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		tab[i] = i + 1;
		i++;
	}
}

void	ft_boucle(int *arg_atoi, int i, int **position)
{
	int	tab[4];

	ft_tab(tab);
	while (tab[0] <= 4)
	{
		while (tab[1] <= 4)
		{
			while (tab[2] <= 4)
			{
				while (tab[3] <= 4)
				{
					ft_check(tab, i, position, arg_atoi);
					tab[3]++;
				}
				tab[3] = 1;
				tab[2]++;
			}
			tab[2] = 1;
			tab[1]++;
		}
		tab[1] = 1;
		tab[0]++;
	}
}
