/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:43:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/10 18:10:29 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_length(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length_dst;
	unsigned int	length_src;

	i = ft_length(dst);
	i = 0;
	length_dst = ft_length(dst);
	length_src = ft_length(src);
	if (size <= ft_length(dst))
	{
		return (length_src + size);
	}
	while (src[i] != '\0' && i < (size - length_dst - 1))
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (length_dst + length_src);
}

/*
int	main()
{
	char	src[] = "henriques";
	char	dest[20] = "mario";
	unsigned int	size = 8;
	
	int x = ft_strlcat(dest, src, size);
	printf("%s", dest);
	printf("\n%d", x);
	return 0;
}
*/
