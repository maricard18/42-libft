/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:59:52 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:21:25 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_whitespaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_signs(char *str, char *y)
{
	int	i;
	int	b;

	*y = '-';
	i = ft_whitespaces(str);
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{	
			b++;
		}
		else if (str[i] != '+')
			break ;
		i++;
	}
	if (b % 2 == 0)
		*y = '+';
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		num;
	char	a;

	num = 0;
	i = ft_signs(str, &a);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	if (a == '-')
		num = num * -1;
	return (num);
}

/*
int	main()
{
	char	str[]="   --+-1 234abd";
	int x = ft_atoi(str);
	printf("%d\n", x);
	return 0;
}
*/
