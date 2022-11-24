/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:21:40 by maricard          #+#    #+#             */
/*   Updated: 2022/11/24 09:55:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_array(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (s[0] != c && s[0] != '\0')
		k++;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] == '\0')
				return (k);
			else if (s[i + 1] != c)
				k++;
			i++;
		}
		i++;
	}
	if (s[i - 1] == c && s[i] == '\0')
		k--;
	return (k);
}

char	**ft_malloc(char *s, char **str, int i, int k)
{
	str = malloc(i * sizeof(char) + 1);
	ft_strlcpy(str, s, i - k);
	return (str);
}

char	**ft_copy(char const *s, char c, char **str)
{
	int	i;
	int	k;
	int a;
	int	x;

	i = 0;
	k = 0;
	x = 0;
	while (s[i])
	{
		a = 0;
		while (s[i] == c)
		{
			a++;
			if (s[i + 1] != c)
			{
				ft_malloc(s + k, &str[x], i - a, k);
				k = i;
				x++;
			}
			i++;
		}
		i++;
	}
	return (str);
}

char	**ft_split2(char const *s, char c)
{
	char	**str;

	str = malloc(ft_array(s, c) * sizeof(char) + 1);
	if (!str)
		return (0);
	
	return (str);
}

int	main()
{
//	int		i = 0;
//	char	**str = ft_split2(const char *s, char c);
		ft_split2("olaXolaXola", 'X');
//	while (str[i])
//		printf("STR- %s\n", str[i++];
}
