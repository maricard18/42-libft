/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:40:33 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 19:15:49 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(nmemb * size);
	if ((nmemb || size) == 0)
		return (0);
	ft_bzero(str, nmemb * size);
	return ((void *)str);
}

int	main()
{
	char	str[] = "ola tudo bem";

	ft_calloc(3, 1);
	printf("%c\n", str[3]);
	return (0);
}
