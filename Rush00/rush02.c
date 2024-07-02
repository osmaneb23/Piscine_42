/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:13:02 by baiannon          #+#    #+#             */
/*   Updated: 2023/08/06 16:37:11 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_premiere_ligne(int a, int b)
{
	if (a >= 3)
	{
		while (b > 2)
		{
			ft_putchar('B');
			b--;
		}
	}
}

void	ft_b(int a, int b)
{
	int	tmp;

	tmp = b;
	if (a > 2)
	{
		while (a > 2)
		{
			ft_putchar('B');
			if (b > 1)
			{
				while (b > 2)
				{
					ft_putchar(' ');
					b--;
				}
				ft_putchar('B');
			}
			a--;
			b = tmp;
			ft_putchar('\n');
		}
	}
}

void	ft_derniere_ligne(int a, int b)
{
	while (a > 2)
	{
		ft_putchar('B');
		a--;
	}
	if (b > 1)
	{
		ft_putchar('C');
	}
}

void	ft_error(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		ft_putchar('E');
		ft_putchar('R');
		ft_putchar('R');
		ft_putchar('O');
		ft_putchar('R');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		if (x >= 2)
		{
			ft_premiere_ligne(x, x);
			ft_putchar('A');
		}
		ft_putchar('\n');
	}
	if (y > 1 && x > 0)
	{
		ft_b(y, x);
		ft_putchar('C');
		ft_derniere_ligne(x, x);
		ft_putchar('\n');
	}
	ft_error(x, y);
}
