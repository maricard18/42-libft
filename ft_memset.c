/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:46:08 by maricard          #+#    #+#             */
/*   Updated: 2022/11/11 14:43:42 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && n > i)
	{
		((char *)s)[i] = c;
		i++;
	}
	return ((char *)s);
}

int	main()
{
	char	str[] = "ola tudo bem";

    ft_memset(str, '2', 6);
    printf("%c\n", str[5]);
    return (0);
}
