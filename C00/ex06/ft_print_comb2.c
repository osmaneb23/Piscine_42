/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:51:52 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/07 16:51:52 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c, char d)
{
	if (a < c || (a == c && b < d))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_boucle(char c1, char c2, char c3, char c4)
{
	while (c1 <= '9')
	{
		while (c2 <= '9')
		{
			while (c3 <= '9')
			{
				while (c4 <= '9')
				{
					ft_print(c1, c2, c3, c4);
					c4++;
				}
				c4 = '0';
				c3++;
			}
			c3 = '0';
			c2++;
		}
		c2 = '0';
		c1++;
	}
}

void	ft_print_comb2(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0';
	c2 = '0';
	c3 = '0';
	c4 = '0';
	ft_boucle(c1, c2, c3, c4);
}
// int	main(void)
// {
// 	ft_print_comb2();
// }