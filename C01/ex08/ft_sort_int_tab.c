/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:09:33 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/09 13:34:31 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	k = 0;
	while (k < size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			i++;
			j++;
		}
		i = 0;
		j = 1;
		k++;
	}
}

// int		main(void)
// {
// 	int c[5] = {55,-10,59,8,-2};
// 	ft_sort_int_tab(c, 5);
// 	printf("Ordre croissant:? ");
// 	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
// }
