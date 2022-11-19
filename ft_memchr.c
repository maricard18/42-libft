/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:41:46 by maricard          #+#    #+#             */
/*   Updated: 2022/11/18 16:18:47 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char *)s && i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((char *)s);
		i++;
	}
	return (0);
}

/*
int	main()
{
	char	str[] = "laranjas e bananas";
	int		x = ft_memchr;
	int		y = memchr;

	printf("minha função\n");
	ft_memchr(str, 'r', 5);
	printf("%s\n", x);
	printf("\n");
	printf("função livraria");
	memchr(str, 'r', 5);
	printf("%s\n", y);
	return (0);
}
*/
