/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:19:54 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 10:35:01 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_malloc(char const *s, char **str, int i, int a, int k)
{
	int	z;

	z = 0;
	str = malloc((i - a) * sizeof(char) + 1);
	ft_strlcpy(str[0], s + k, (i + 1) - a);
	return (str);
}

char	**ft_copy(char const *s, char c, char **str)
{
	int	i;
	int	a;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		a = 0;
		while (s[i] == c)
		{
			if (s[i + 1] != c)
			{
				ft_malloc(s, str, i , a, k);
				k = i;
			}
			i++;
			a++;
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{	
	int		i;
	int		a;
	char	**str;

	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] != c)
				a++;
			i++;
		}
		i++;
	}
	if (s[i] == '\0')
		a = a + 1;
	str = malloc(a * sizeof(char) + 1);
	return (ft_copy(s, c, str));
}	

int	main()
{
	int		i = 0;
	char	**string = ft_split("marioxmarioxxxmarioxmario", 'x');

	while (string && i < 3)
	{
		printf("%s\n", string[i]);
		i++;
	}
	return (0);
}

