/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 05:07:31 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/21 19:42:06 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	strs = NULL;
	strs = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	if (strs == NULL)
		return (strs);
	while (i < ac)
	{
		strs[i].str = malloc(ft_strlen(av[i]) * sizeof(t_stock_str));
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(strs[i].str);
		strs[i].size = ft_strlen(av[i]);
		i++;
	}
	strs[ac].str = 0;
	return (strs);
}
