/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:30:04 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/21 19:35:40 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr / 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	j = 0;
	while (par[j].str != 0)
	{
		i = 0;
		while (par[j].str[i])
		{
			ft_putchar(par[j].str[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(par[j].size);
		ft_putchar('\n');
		i = 0;
		while (par[j].copy[i])
		{
			ft_putchar(par[j].copy[i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
