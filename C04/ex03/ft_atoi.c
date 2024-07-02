/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:45:20 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/13 13:06:26 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		signe;
	long	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signe = signe * -1;
		}
		i++;
	}
	while (str[i] < 58 && str[i] > 47)
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	return (resultat * signe);
}

// int	main(void)
// {
// 	char str[] = "     ---+++5a55";
// 	printf("%d", ft_atoi(str));
// }
