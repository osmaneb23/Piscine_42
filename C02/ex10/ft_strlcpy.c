/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/08/09 16:05:30 by obouayed          #+#    #+#             */
/*   Updated: 2023/08/09 16:05:30 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
// #include <strings.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int b = 16;
// 	char str1[] = "dsgsdgffsfdsfd";
// 	char str2[10];
// 	char str3[] = "dsgsdgffsfdsfd";

// 	printf("%d\n", ft_strlcpy(str2, str1, b));
// 	printf("-------------------------------\n");
// 	printf("%ld\n", strlcpy(str2, str3, b));
// }
