/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:21:40 by maricard          #+#    #+#             */
/*   Updated: 2022/11/23 15:35:21 by maricard         ###   ########.fr       */
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
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] != c)
				k++;
			i++;
		}
		i++;
	}
	if (s[i - 1] == c)
		k--;
	return (k);
}

char	**ft_split2(char const *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	printf("%i\n", ft_array(s, c));
	str = malloc(ft_array(s, c) * sizeof(char) + 1);
	if (!str)
		return (0);
	return (str);
}

int	main()
{
//	int		i = 0;
//	char	**str = ft_split2(const char *s, char c);
		ft_split2("xxxmarioxmarioxmarioxxx", 'x');
//	while (str[i])
//		printf("STR- %s\n", str[i++];
}
