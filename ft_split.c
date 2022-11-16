/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:19:54 by maricard          #+#    #+#             */
/*   Updated: 2022/11/16 13:53:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array(char const *s, char c)
{
	int	i;
	int	a;
	char	**str;

	i = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] == c)		
		{
			if (s[i] != c)
				a++;
			i++;	
		}
		i++;
	}
	str = malloc(a * sizeof(char) + 1);
	return (str);
}	
char	**ft_malloc(char const *s, char c)
{
	int	i;
	int	a;
	int	x;
	int	z;
	char	**str;

	str = ft_array(s, c);
	i = 0;
	a = 0;
	x = 0;
	z = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i] != c)
			{
				str[x] = malloc((i-a) * sizeof(char) + 1);
				ft_strlcpy(str[x], s + z, i - a);
				x++;
				z = z + i;
			}
			i++;
			a++;
		}
		i++;
	}
	str[x] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{	
	return (ft_malloc(s, c));

}	

int	main()
{
	int	i = 0;
	char	**string = ft_split("marioomarioomarioo", 'o');
	while (string && i < 3)
	{
		printf("%s\n", string[i]);
		i++;
	}
	return (0);
}
