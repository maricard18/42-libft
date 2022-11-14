/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:21:07 by maricard          #+#    #+#             */
/*   Updated: 2022/11/14 11:02:40 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	char	*str;

	i = 0;	
	str = malloc((len + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

int	main()
{
	char	string[] = "ola tudo bem";

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", string);
	printf("%s\n",ft_substr(string, 0, 3 ));
	printf("---------------\n");
	printf("\n");
/*
	printf("função livraria\n");
	printf("%s\n", final);
	memmove(final, str, 6);
	printf("%s\n", final);
	return (0);
*/
}
