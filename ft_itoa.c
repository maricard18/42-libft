/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:57:12 by maricard          #+#    #+#             */
/*   Updated: 2022/11/15 14:03:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nbr(int n, int x, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		x--;
	}
	if (n < 10)
		str[x] = n + '0';
	if (n > 9)
	{
		ft_nbr(n / 10, x, str);
		x--;	
		ft_nbr(n % 10, x, str);
		x--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		x;
	char	*str;

	i = n;
	x = 0;	
	while (i > 0)
	{
		i = i / 10;
		x++;
	}
	str = malloc(x * sizeof(char) + 1);
	return (ft_nbr(n, x, str));
}

int	main(void)
{
//	printf("-----------\n");
	printf("NUMERO- %s\n", ft_itoa(53));
//	printf("-----------\n");
}
