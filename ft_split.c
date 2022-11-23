/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:19:54 by maricard          #+#    #+#             */
/*   Updated: 2022/11/23 12:39:30 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_malloc(char const *s, char **str, int i, int x, int k)
{
	str[x] = malloc(i * sizeof(char) + 1);
	ft_strlcpy(str[x], s, (i + 1) - k);
	return (str);
}

char	**ft_copy(char const *s, char c, char **str)
{
	int	i;
	int	a;
	int	k;
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
				ft_malloc(s + k, str, (i + 1) - a, x, k);
				x++;
				k = i + 1;
			}
			i++;
		}
		i++;
	}
	return (str);
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
	char	**string = ft_split("marioxmarigfdoxxmario", 'x');

	while (string[i])
	{
		printf("String- %s\n", string[i]);
		i++;
	}
	return (0);
}

