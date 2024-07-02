/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:29:05 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/23 20:49:38 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*str;
	int		*null;
	int		i;

	i = 0;
	str = malloc(sizeof(int) * (max - min));
	null = NULL;
	if (min >= max || str == NULL)
		return (null);
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range[i] = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	while (range[i][j])
		j++;
	return (j);
}

// #include <stdio.h>
// int main()
// {
// 	int **a;

// 	a = malloc(sizeof(int) * 100);
// 	printf("%i",ft_ultimate_range(a,NULL,1));
// }