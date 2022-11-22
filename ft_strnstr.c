/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:11:05 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 10:46:15 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	a;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < size)
	{
		a = 0;
		if (big[i] == little[a])
		{
			while (big[i] == little[a] && i < size)
			{
				a++;
				i++;
			}
			if (little[a] == '\0')
				return ((char *)&big[i - a]);
		}
		i++;
	}
	return (0);
}

/*
int    main()
{
	char	big[] = "ola tudo bem";
	char	little[] = "";
	size_t	n = 3;

	printf("\nMINHA FUNÇÃO\n");
	printf("\nB- %s", big);
	printf("\nL- %s\n", little);
	printf("\n%s\n", ft_strnstr(big, little, n));
	printf("\n---------------");
	printf("\n---------------\n");
	printf("\nFUNÇÃO LIVRARIA\n");
	printf("\nB- %s", big);
	printf("\nL- %s\n", little);
	printf("\n%s\n", strnstr(big, little, n));
	printf("\n");
}
*/
