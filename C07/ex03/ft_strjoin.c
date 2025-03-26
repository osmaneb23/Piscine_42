/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:58:30 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/26 19:08:27 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	taille;

	j = 0;
	taille = 0;
	i = -1;
	if (size <= 0)
		return (0);
	while (sep[++i])
	{
		taille++;
	}
	taille = taille * (size - 1);
	i = -1;
	while (++i < size)
	{
		while (strs[i][j])
		{
			taille++;
			j++;
		}
		j = 0;
	}
	return (taille);
}

int	ft_separe(char *chaine, char *sep, int k, int taille)
{
	int	i;

	i = 0;
	if (k < taille)
	{
		while (sep[i])
		{
			chaine[k] = sep[i];
			k++;
			i++;
		}
	}
	return (k);
}

char	*join(char *chaine, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	taille;

	i = -1;
	k = 0;
	taille = ft_strlen(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			chaine[k] = strs[i][j];
			k++;
			j++;
		}
		k = ft_separe(chaine, sep, k, taille);
	}
	chaine[k] = '\0';
	return (chaine);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*chaine;

	chaine = NULL;
	chaine = malloc(sizeof(char) * ft_strlen(size, strs, sep) + 1);
	*chaine = 0;
	if (chaine == NULL)
		return (chaine);
	if (size <= 0)
		return (chaine);
	chaine = join(chaine, size, strs, sep);
	return (chaine);
}
