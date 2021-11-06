/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:36:17 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/18 17:17:21 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str, int i)
{
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		return (1);
	return (0);
}

int	ft_number(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	count;

	i = 0;
	nb = 0;
	count = 0;
	while (str[i] != '\0' && ft_space(str, i) == 1)
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			count += 1;
		i++;
	}
	while (str[i] != '\0' && ft_number(str, i) == 1)
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (count % 2 != 0)
		return (nb *= -1);
	else
		return (nb);
}
