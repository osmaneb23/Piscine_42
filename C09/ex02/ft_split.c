/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:55:47 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/23 19:54:21 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkstr(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_lenwords(char *str, char *charset)
{
	int	i;
	int	compteur;
	int	word;

	i = 0;
	compteur = 0;
	word = 0;
	while (str[i])
	{
		if (!checkstr(charset, str[i]))
		{
			if (!word)
			{
				compteur++;
				word = 1;
			}
		}
		else
		{
			word = 0;
		}
		i++;
	}
	return (compteur);
}

int	ft_sizeword(char *str, char *charset, int k)
{
	int	size;

	size = 0;
	while (str[k] && !checkstr(charset, str[k]))
	{
		size++;
		k++;
	}
	return (size);
}

char	*ft_strdup(char *src, char *charset, int *index)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_sizeword(src, charset, *index)
				+ 1));
	if (!str)
		return (NULL);
	while (src[*index] && !checkstr(charset, src[*index]))
	{
		str[i] = src[*index];
		i++;
		(*index)++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		k;
	int		i;

	k = 0;
	i = 0;
	tab = 0;
	tab = (char **)malloc(sizeof(char *) * ft_lenwords(str, charset) + 1);
	if (!tab)
		return (NULL);
	while (str[k])
	{
		if (!checkstr(charset, str[k]))
		{
			tab[i] = ft_strdup(str, charset, &k);
			if (!tab[i])
				return (NULL);
			i++;
		}
		else
			k++;
	}
	tab[i] = 0;
	return (tab);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*a;
// 	char	*b;
// 	int		i;

// 	i = 0;
// 	a = "*-#";
// 	b = "Test###*Td*-/;;nbc";
// 	while (ft_split(b, a)[i])
// 	{
// 		printf("%s", ft_split(b, a)[i]);
// 		i++;
// 	}
// }
