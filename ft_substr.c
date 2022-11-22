/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:21:07 by maricard          #+#    #+#             */
/*   Updated: 2022/11/22 12:04:10 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main()
{
	char			string[] = "ola tudo bem";
	unsigned int	i = 3;
	size_t			len = 7;

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("%s\n", string);
	printf("%s\n",ft_substr(string, i, len ));
	printf("---------------\n");
	printf("\n");
	return (0);

}
*/
