/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:08:08 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/07 18:08:08 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (src[j] != '\0')
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

// int main()
// {
//     char a[80] = "He";
//     char b[] = "Warere";
//     printf("%s\n",ft_strcat(a,b));
// 	char c[80] = "He";
// 	printf("---------------------------\n");
//     printf("%s\n",strcat(c,b));
// }