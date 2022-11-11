/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:34:43 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:14:03 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (n == 0)
		return (0);
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	char	s1[] = "abcdef";
	char	s2[] = "abce";
	int	n = 0;
	int	x;

	x = ft_strncmp(s1, s2, n);
	ft_strncmp(s1, s2, n);
	printf("%d\n", x);
	printf("%d\n", strncmp(s1, s2, n));
	return 0;
}
*/
