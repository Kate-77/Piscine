/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:11:31 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/11 11:27:57 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		last;
	int		sw;

	count = 0;
	last = size - 1;
	while (count < size / 2)
	{
		sw = tab[last];
		tab[last] = tab[count];
		tab[count] = sw;
		last--;
		count++;
	}
}

int	main(void)
{
	int		arr[] = {1, 2, 3, 8};
	int 	i;

	i = 0;
	ft_rev_int_tab(arr, 4);
	while (i < 4)
	{
		printf("%d , ", arr[i]);
		i++;
	}
}
