/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:34:41 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/15 19:34:58 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	long	i;
	long	j;

	i = 0;
	j = argc;
	if (argc > 1)
	{
		while (j > 1)
		{
			while (argv[j - 1][i])
			{
				ft_putchar(argv[j - 1][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j--;
		}
	}
}
