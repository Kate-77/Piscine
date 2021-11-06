/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:20:58 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/17 18:29:53 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str, char *to_find, int i, int j)
{
	while (str[i] == to_find[j])
	{
		i++;
		j++;
		if (to_find[j] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (ft_check (str, to_find, i, j) == 1)
				   return (str + i);
		}
		i++;
	}
	return (0);
}
