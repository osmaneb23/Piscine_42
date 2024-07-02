/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:19:01 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/22 21:28:07 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nombre;

	i = 1;
	nombre = 0;
	while (nombre < nb && i < 4700)
	{
		nombre = i * i;
		if (nombre == nb)
		{
			return ((int)i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
    printf("%i", ft_sqrt(2147483647));
}