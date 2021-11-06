/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:27:09 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/15 18:30:40 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = dest;
	while (src[i] != '\0' && i < n)
	{
		*(result + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(result + i) = '\0';
		i++;
	}
	return (dest);
}
