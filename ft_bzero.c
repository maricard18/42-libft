/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:10:49 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:30:11 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((char *)s)[n] = 0;
}

/*
int	main(void)
{
	char	str[] = "ola tudo bem";

	ft_bzero(str, 5);
	printf("%c\n", str[5]);
	return (0);
}
*/
