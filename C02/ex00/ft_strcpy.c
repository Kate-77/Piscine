/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:49:11 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/15 18:29:29 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
