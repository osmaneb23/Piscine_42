/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:40:43 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/26 18:58:16 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	long	nbr;

	i = 2;
	nbr = nb;
	while (i < 4700 && nbr != i)
	{
		if (nb < 2 || !(nbr % i))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_is_prime(2147483647));
// }