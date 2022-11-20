/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:11:05 by maricard          #+#    #+#             */
/*   Updated: 2022/11/20 11:54:47 by maricard         ###   ########.fr       */
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
	while (big[i] != '\0')
	{
		a = 0;
		if (big[i] == little[a])
		{
			while (big[i] == little[a] && i > size)
			{
				if (little[a] == '\0')
				{
					return ((char *)&big[i]);
				}
				a++;
				i++;
			}
		}
		i++;
	}
	return (0);
}

int    main()
{
	char	big[] = "ola tudo bem";
	char	little[] = "tudo";
	size_t	n = 10;

	printf("\nMINHA FUNÇÃO\n");
	printf("\n%s\n", big);
	printf("%s\n", ft_strnstr(big, little, n));
	printf("\n---------------");
	printf("\n---------------\n");
	printf("\nFUNÇÃO LIVRARIA\n");
	printf("\n%s\n", big);
	printf("%s\n", strnstr(big, little, n));
}
