/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/14 12:25:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_remove(char const *s1, char const *set, char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s1[i])
	{
		while (set[n])
		{
			if (s1[i] == set[n])
			{
				i++;
				n++;
			}
			n++;
		}
		str[i] = s1[i];
		i++;
	}
	return (*str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	char	*str;
	char	*final;

	a = ft_strlen(s1);
	b = ft_strlen(set);
	str = malloc((a - b + 1) * sizeof(char));
	final = *ft_remove(s1, set, str);
	return(final);

}

int	main()
{
	char	s1[] = "ola tudo bem";
	char	set[] = "ola";

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", s1);
	printf("%s\n", set);
	printf("%s\n",ft_strtrim(s1, set));
	printf("---------------\n");
	printf("\n");
}
