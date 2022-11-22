/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/21 17:08:21 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remove(char const *s1, char const *set, char *str)
{
	int	i;
	int	a;
	int	z;

	i = 0;
	z = 0;
	while (s1[i])
	{
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
			{
				i++;
				a = 0;
			}
			a++;
		}
		str[z] = s1[i];
		i++;
		z++;
	}
	str[i] = '\0';
	return (str);

}

int	ft_counter(char const *s1, char const *set)
{
	int	i;
	int	a;
	int	z;

	i = 0;
	z = 0;
	while (s1[i])
	{
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
				z++;
			a++;
		}
		i++;
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	char	*str;
	char	*final;

	a = ft_strlen(s1);
	str = malloc((a - ft_counter(s1, set)) * sizeof(char) + 1);
	final = ft_remove(s1, set, str);
	return(final);
}

int	main()
{
	char	s1[] = "ol1atu132d2obe1m";
	char	set[] = "123";

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", s1);
	printf("%s\n", set);
	printf("%s\n",ft_strtrim(s1, set));
	printf("---------------\n");
	printf("\n");
}
