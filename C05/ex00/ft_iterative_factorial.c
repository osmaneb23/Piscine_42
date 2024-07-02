/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:49:59 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/20 01:44:24 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	nbr;

	nbr = nb;
	i = nbr - 1;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		return (0);
	while (i)
	{
		nbr *= i;
		i--;
	}
	return (nbr);
}

// int main()
// {
//     int b = 0;
//     int a = ft_iterative_factorial(b);
//     printf("%i", a);
// }