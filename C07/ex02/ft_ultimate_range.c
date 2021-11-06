/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:06:26 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/22 09:22:20 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	tab = NULL;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		if (!tab)
			return (-1);
		while (min < max)
		{
			tab[i] = min;
			min ++;
			i++;
		}
	}
	*range = tab;
	return (size);
}
/*
#include <stdio.h>
int	main()
{
	int	*range;
	int	i;

	i = ft_ultimate_range(&range, 1, 5);
	while (*range)
	{
		printf("%d", *range);
		range++;
	}
	printf("%d", i);
}*/
