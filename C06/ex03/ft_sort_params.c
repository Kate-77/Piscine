/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:23:13 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/21 14:21:45 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_affichage(int argc, char **argv)
{
	int	k;
	int	l;

	(void)argc;
	k = 1;
	while (argv[k])
	{
		l = 0;
		while (argv[k][l])
		{
			write(1, &argv[k][l], 1);
			l++;
		}
		write(1, "\n", 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
			{
				if (ft_strcmp(argv[i], argv[j]) > 0 )
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
				j++;
			}
			i++;
		}
		ft_affichage(argc, argv);
	}
	return (0);
}
