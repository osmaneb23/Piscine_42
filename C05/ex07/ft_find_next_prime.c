/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:54:16 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/20 09:00:48 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	nbr;

	i = 2;
	nbr = nb;
	while (i < 47000 && nbr != i)
	{
		if (nb < 2 || !(nbr % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr <= 2)
		return (2);
	while (!ft_is_prime(nbr))
		nbr++;
	return (nbr);
}

// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	printf("%i", ft_find_next_prime(7));
// }