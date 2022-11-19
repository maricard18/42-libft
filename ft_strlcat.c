/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:43:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/18 16:29:08 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_dst;
	size_t	length_src;

	i = 0;
	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (size <= length_dst)
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
