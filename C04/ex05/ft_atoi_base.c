#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		signe;
	long	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signe = signe * -1;
		}
		i++;
	}
	while (str[i] < 58 && str[i] > 47)
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
	}
	return (resultat * signe);
}

int	ft_erreur(char *base, int i)
{
	int		j;
	char	tab[500];

	j = 0;
	tab[i] = base[i];
	if (base[i] == '+' || base[i] == '-' || base[i] < 33)
		return (0);
	while (tab[j])
	{
		if (base[i + 1] == tab[j])
		{
			return (0);
		}
		j++;
	}
	j = 0;
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	test;

	i = 0;
	test = 1;
	while (base[i])
	{
		if (test)
			test = ft_erreur(base, i);
		i++;
	}
	

	if (test)
		return (ft_atoi(str, base));
	return (0);
}

int	main(void)
{
	char a[] = "0123456789";
	printf("%d", ft_atoi_base("14545", a));
	return (1);
}