/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_og.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmoutaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:00:50 by kmoutaou          #+#    #+#             */
/*   Updated: 2021/08/26 16:00:50 by kmoutaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	while(*charset)
	{
		if(c == *charset)
			return 1;
		charset++;
	}
	return 0;
}

int	ft_word_count(char *s, char *charset)
{
	int wc;

	wc = 0;
	while(*s)
	{
		while(*s && check_sep(*s, charset))
			s++;
		if(*s)
			wc++;
		while(*s && !check_sep(*s, charset))
			s++;
	}
	return wc;
}

int	word_len(char *str, char *charset)
{
	int l;

	l = 0;
	while(*str && !check_sep(*str, charset))
	{
		str++;
		l++;
	}
	return (l);
}

char *get_word(char *str, int len)
{
	char *s;
	int i;

	i = 0;
	s = (char *)malloc(sizeof(char) * len + 1);
	while(i < len && *str)
	{
		s[i] = *str;
		i++;
		str++;
	}
	s[i] = '\0';
	return (s);
}

char **ft_split(char *str, char *charset)
{
	char **strs;
	int	wc;
	int wl;
	char *word;
	int i;

	wl = 0;
	wc = ft_word_count(str, charset);
	strs = (char **)malloc(sizeof(char *) * wc + 1);
	if(!strs)
		return (0);
	
	i = 0;
	while(*str)
	{
		while(*str && check_sep(*str, charset))
			str++;
		if(*str)
		{
			wl = word_len(str, charset);
			word = get_word(str, wl);		
			strs[i] = word;	
			i++;
		}
		while(*str && !check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;

	printf("%s \n", strs[0]);
	return (strs);
}

int main(int ac, char **av)
{
	char **s = ft_split(av[1], " ");
	int i = 0;
	while(s[i])
	{
		printf("word : %s \n", s[i]);
		i++;
	}
	return 0;
}
