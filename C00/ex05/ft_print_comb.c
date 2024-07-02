/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:41:59 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/04 14:42:05 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	if (a < '7')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void	ft_print_comb(void)
{
	char	chiffre1;
	char	chiffre2;
	char	chiffre3;

	chiffre1 = '0';
	chiffre2 = '1';
	chiffre3 = '2';
	while (chiffre1 < '8')
	{
		if (chiffre3 > chiffre2 && chiffre2 > chiffre1)
		{
			ft_print(chiffre1, chiffre2, chiffre3);
		}
		chiffre3++;
		if (chiffre3 > '9')
		{
			chiffre3 = '0';
			chiffre2++;
		}
		if (chiffre2 > '9')
		{
			chiffre2 = '0';
			chiffre1++;
		}
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
