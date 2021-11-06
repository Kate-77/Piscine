/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:44:07 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/25 18:40:56 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	b_ln;
	int	sign;
	int	nb;

	nb = 0;
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

void	ft_putnbr_base(unsigned int nbr, char *base, char *tab, int size , int i)
{
	unsigned int	b_ln;
	int				j;
	int				sign;

	i = 0;
	b_ln = ft_strlen(base);
	if (b_ln < 2)
		return ;
	if (nbr / b_ln)
	{
		ft_putnbr_base(nbr / b_ln, base, tab, size, i - 1);
	}
	tab[i] = base[nbr % b_ln];
}

int	ft_size(int	nb, unsigned int base_ln)
{
	unsigned int	u_nb;
	int				size;
	
	u_nb = nb;
	if (nb < 0)
	{
		size = 1;
		u_nb = -nb;
	}
	else
	{
		size = 0;
		u_nb = nb;
	}
	while (u_nb > base_ln)
	{
		size++;
		u_nb /= base_ln;
	}
	size++;
	return (size);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	unsigned int	u_nb;
	unsigned int	base_ln;
	char			*tab;
	int				size;

	base_ln = ft_base_check(base_from);
	if (base_ln == 0) 
		return (NULL);
	if (ft_base_check(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	size = ft_size(nb, base_ln);
	tab = malloc(sizeof(char) * (size + 1));
	u_nb = nb;
	ft_putnbr_base(nb, base_to, tab, size, (size - 1));
	tab[size] = '\0';
	return (tab);
}

#include <stdio.h>
int	main()
{
	int		i = 0;
	char	*tab;
	
	tab	= ft_convert_base("12c", "0123456789abcdef", "0123456879");
	//printf("%d", i);
	while (tab[i])
	{
		printf("%c", tab[i]);
		i++;
	}
}
