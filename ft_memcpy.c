/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:02:01 by maricard          #+#    #+#             */
/*   Updated: 2022/11/12 09:39:41 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)src) && n > i)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

int	main()
{
	char	str[] = "ola tudo bem";
	char	final[] = "vamos a praia";

	printf("minha função\n");
	printf("%s\n", final);
	ft_memcpy(final, str, 6);
	printf("%s\n", final);
	printf("\n");
/*
	printf("função livraria\n");
	printf("%s\n", final);
	memcpy(final, str, 6);
	printf("%s\n", final);
	return (0);
*/
}
