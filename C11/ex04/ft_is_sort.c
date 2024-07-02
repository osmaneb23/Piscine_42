/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:51:00 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/22 20:43:18 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int croissant;
	int decroissant;

	i = 0;
	croissant = 1;
	decroissant = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		i++;
	}
	if (croissant || decroissant)
		return(1);
	return (0);
}