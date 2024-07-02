/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:23:34 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:12:47 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skyscrapper(int *position[4], int *tab, int *arg_atoi, int i);

void	ft_check(int *nbrs, int i, int **position, int *arg_atoi)
{
	int		tab[4];

	if (nbrs[0] != nbrs[1] && nbrs[0] != nbrs[2]
		&& nbrs[0] != nbrs[3] && nbrs[1] != nbrs[2]
		&& nbrs[1] != nbrs[3] && nbrs[2] != nbrs[3])
	{
		tab[0] = nbrs[0];
		tab[1] = nbrs[1];
		tab[2] = nbrs[2];
		tab[3] = nbrs[3];
		skyscrapper(position, tab, arg_atoi, i);
	}
}
