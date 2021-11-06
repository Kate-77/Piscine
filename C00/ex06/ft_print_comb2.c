/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:10:01 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/07 11:28:02 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_number(int num)
{
	if (num > 9)
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
}

void	ft_print_comb2(void)
{
	int		rn;
	int		ln;

	ln = 0;
	while (ln <= 99)
	{
		rn = ln + 1;
		while (rn <= 99)
		{
			ft_number(ln);
			ft_putchar(' ');
			ft_number(rn);
			if (ln != 98)
			{
				write(1, ", ", 2);
			}
			rn++;
		}
		ln++;
	}
}
