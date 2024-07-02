/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfloren <alfloren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:21:46 by alfloren          #+#    #+#             */
/*   Updated: 2023/08/13 21:12:31 by alfloren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line_left(int *tab)
{
	int	c;
	int	i;
	int	sommeleft;

	i = 0;
	sommeleft = 1;
	c = tab[0];
	while (i < 3)
	{
		if (c < tab[i + 1])
		{
			c = tab[i + 1];
			sommeleft++;
		}
		i++;
	}
	return (sommeleft);
}

int	check_line_right(int *tab)
{
	int	d;
	int	i;
	int	sommeright;

	i = 0;
	sommeright = 1;
	d = tab[3];
	while (i < 3)
	{
		if (d < tab[3 - (i + 1)])
		{
			d = tab[3 - (i + 1)];
			sommeright++;
		}
		i++;
	}
	return (sommeright);
}

int	check_line(int *tab, int *arg_atoi, int line)
{
	int	sommeleft;
	int	sommeright;

	sommeleft = check_line_left(tab);
	sommeright = check_line_right(tab);
	if (sommeleft != arg_atoi[8 + line] || sommeright != arg_atoi[12 + line])
		return (0);
	return (1);
}
