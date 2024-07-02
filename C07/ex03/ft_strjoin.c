/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:58:30 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/22 18:17:17 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep(char *sep, char *str, int k)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		str[k] = sep[j];
		j++;
		k++;
	}
	return (k);
}

int	ft_addstr(char **strs, char *str, int i, int k)
{
	int	j;

	j = 0;
	while (strs[i][j])
	{
		str[k] = strs[i][j];
		k++;
		j++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = 0;
	str = malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (str);
	if (size == 0)
	{
		str[0] = '\0';
		return (str);
	}
	while (i < size)
	{
		k = ft_addstr(strs, str, i, k);
		i++;
		if (i < size)
			k = ft_sep(sep, str, k);
	}
	str[k] = '\0';
	return (str);
}
