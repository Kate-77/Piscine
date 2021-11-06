/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:41:27 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/26 15:35:38 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] >= 9 && base[i] < 13) || base[i] == 32
			|| base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_belong(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_transform(char *str, int i, char *base, int base_length)
{
	int	index;
	int	nb;

	index = ft_belong(str[i], base);
	nb = 0;
	while (str[i])
	{
		nb = (nb * base_length) + index;
		i++;
		index = ft_belong(str[i], base);
	}
	return (nb);
}

int	ft_space(char *str, int i)
{
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	b_ln;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	b_ln = ft_base_check(base);
	if (b_ln < 2)
		return (0);
	i = 0;
	while (str[i] != '\0' && ft_space(str, i) == 1)
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nb = ft_transform(str, i, base, b_ln);
	return (nb * sign);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_atoi_base("  --+-1000110000", "01"));
}*/
