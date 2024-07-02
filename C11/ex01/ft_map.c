/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:17:38 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/22 20:58:20 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*j;

	j = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		j[i] = f(tab[i]);
		i++;
	}
	return (j);
}
