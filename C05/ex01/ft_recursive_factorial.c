/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:40:06 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/15 14:56:24 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	return (nbr * (ft_recursive_factorial(nb - 1)));
}

// int main()
// {
//     int b = 5;
//     int a = ft_recursive_factorial(b);
//     printf("%i", a);
// }
