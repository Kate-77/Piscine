/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:45:01 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/10 13:50:53 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		first;
	int		next;
	int		sw;

	first = 0;
	while (first < size - 1)
	{
		next = first + 1;
		while (next < size)
		{
			if (tab[next] < tab[first])
			{
				sw = tab[first];
				tab[first] = tab[next];
				tab[next] = sw;
			}
			next++;
		}
		first++;
	}
}
