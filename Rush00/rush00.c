/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:50:45 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/10 10:05:52 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size > 2)
	{
		ft_putchar(middle);
		size--;

	}
	if (size == 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_put('o', '-', 'o', x);
	while (y > 2)
	{
		ft_put('|', ' ', '|', x);
		y--;
	}
	if (y == 2)
		ft_put('o', '-', 'o', x);
}
