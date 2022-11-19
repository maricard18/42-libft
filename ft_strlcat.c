/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:43:37 by maricard          #+#    #+#             */
/*   Updated: 2022/11/19 18:28:02 by maricard         ###   ########.fr       */
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
	if (size == 0)
		return (length_src);
	if (length_dst > size)
	{
		return (length_src + size);
	}
	while (src[i] && i < (size - length_dst - 1))
	{
		dst[length_dst + i] = src[i];
		i++;
	}
	dst[length_dst + i] = '\0';
	return (ft_strlen(dst));
}

/*
int    main()
{
	char	src[] = "henriques";
	char	dst[] = "mario";
	char	src_a[] = "henriques";
	char	dst_a[] = "mario";
	size_t	n = 20;

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", dst);
    ft_strlcat(dst, src, n);
    printf("%s\n", dst);
    printf("\n---------------");
    printf("\n---------------\n");
    printf("\nFUNÇÃO LIVRARIA\n");
    printf("\n%s\n", dst_a);
    strlcat(dst_a, src_a, n);
    printf("%s\n\n", dst_a);
}
*/
