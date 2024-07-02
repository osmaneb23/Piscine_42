/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:21:13 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/20 01:46:52 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	long	nbr;
	long	tmp;

	nbr = nb;
	tmp = nbr;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nbr *= tmp;
		power--;
	}
	return (nbr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_iterative_power(9, 3));
// }