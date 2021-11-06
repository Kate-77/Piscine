/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:58:41 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/25 19:24:37 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_charset_check(char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j])
			return (1);
		j++;
	}
	return (0);
}
		
int	ft_length(char *str, char *charset)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] - 1)
	{
		l += ft_strlen(str[i]);
		i++;
	}
	l -= ft_strlen(charset) * (size - 1);
	return (l);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	*tab = malloc(sizeof(char) * ft_length(str)) ;
	if (!tab)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				tab[i] = str[i];
			j++;
		}
		i++;
	}
	return (tab);
}
#include <stdio.h>
int	main(int ac, char **av))
{
	int		i;
	char	**tab;

	i = 0;
	*tab = ft_split(*av, " ");
	while (*tab[i])
	{
		printf("%c", **tab);
		i++;
	}
}
