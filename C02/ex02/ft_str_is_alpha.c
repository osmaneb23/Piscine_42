/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:24:17 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/08 18:24:17 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97
					&& str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
//     int a = 0;
//     char str1[20] = "";

//     a = ft_str_is_alpha(str1);
//     printf("%d",a);
// }
