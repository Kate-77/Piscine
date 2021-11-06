/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:50:58 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/18 14:25:21 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	count1;

	i = 0;
	count = ft_strlen(dest);
	count1 = ft_strlen(src);
	if (size <= count)
		count1 += size;
	else
		count1 += count;
	while (src[i] != '\0' && count + 1 + i < size)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (count1);
}
