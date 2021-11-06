/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:32:18 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/25 13:50:02 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = NULL;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (tab);
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	return (tab);
}

#include <stdio.h>
int	main()
{
	int	*tab;
	tab = ft_range(7, 5);
	while (*tab)
	{
		printf("%d", *tab);
		tab++;
	}
}
