/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:11:05 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:19:51 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	a;

	if (little[0] == '\0')
		return ((char*)*big);
	i = 0;
	while (big[i] != '\0')
	{
		a = 0;
		if (big[i] == little[0])
		{
			while (little[a] && little[a] == big[i + a] && 
													i + a > size)
				a++;
			if (little[a] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	printf("minha função\n");
	printf("%s\n", ft_strnstr("ola tudo bem", "tudo", 10));
//	printf("%d\n", ft_tolower(23));
//	printf("%d\n", ft_tolower('a'));
//	printf("%d\n", ft_tolower('V'));
//	printf("%d\n", ft_tolower('$'));
//	printf("%d\n", ft_tolower(0));
	printf("\n");
	printf("função livraria\n");
	printf("%s\n", strnstr("ola tudo bem", "tudo", 10));
//	printf("%d\n", tolower(23));
//	printf("%d\n", tolower('a'));
//	printf("%d\n", tolower('V'));
//	printf("%d\n", tolower('$'));
//	printf("%d\n", tolower(0));
}
