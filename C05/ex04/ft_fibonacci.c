/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:03:55 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/15 19:21:26 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	long	nbr;

	nbr = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(nbr - 2) + ft_fibonacci(nbr - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i", ft_fibonacci(12));
// }