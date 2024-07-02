/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:50:46 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/16 13:51:12 by obouayed         ###   ########.fr       */
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
