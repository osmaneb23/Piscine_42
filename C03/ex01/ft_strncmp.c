/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:07:44 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/07 18:07:44 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	int i;

// 	i = 15;
//     char a[] = "ABCDEF";
//     char b[] = "ABCDEF";
// 	printf("%i\n",ft_strncmp(a,b,i));
// 	printf("---------------------------\n");
//     printf("%i\n",strncmp(a,b,i));
// }