/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:06:20 by maricard          #+#    #+#             */
/*   Updated: 2022/11/11 17:02:22 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = dest;
	while (((char *)src)[i] != '\0' && n > i)
	{
		temp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (temp[i])
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	return ((char *)dest);
}

int	main()
{
	char	str[] = "ola tudo bem";
	char	final[] = "vamos a praia";
/*
	printf("minha função\n");
	printf("%s\n", final);
	ft_memmove(final, str, 6);
	printf("%s\n", final);
	printf("\n");
*/
	printf("função livraria\n");
	printf("%s\n", final);
	memmove(final, str, 6);
	printf("%s\n", final);
	return (0);

}
