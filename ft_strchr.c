/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:56:52 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:12:13 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
int main()
{
	printf("minha função\n");
	printf("%s\n", ft_strchr("ola", 'l'));
//	printf("%d\n", ft_strchr(23));
//	printf("%d\n", ft_strchr('a'));
//	printf("%d\n", ft_strchr('V'));
//	printf("%d\n", ft_strchr('$'));
//	printf("%d\n", ft_strchr(0));
	printf("\n");
	printf("função livraria\n");
	printf("%s\n", strchr("ola", 'l'));
//	printf("%d\n", strchr(23));
//	printf("%d\n", strchr('a'));
//	printf("%d\n", strcrr('V'));
//	printf("%d\n", strchr('$'));
//	printf("%d\n", strchr(0));
}
*/
