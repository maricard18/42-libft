/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:21:40 by maricard          #+#    #+#             */
/*   Updated: 2022/11/24 19:09:41 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_getwordcount(const char *s, char c)
{
	const char	*wordstart;
	int			word_i;

	wordstart = NULL;
	word_i = 0;
	while (1)
	{
		if (*s != c && *s)
		{
			if (wordstart == NULL)
				wordstart = s;
		}
		else
		{
			if (wordstart != NULL)
			{
				word_i++;
				wordstart = NULL;
			}
			if (!*s)
				break ;
		}
		s++;
	}
	return (word_i);
}

void	ft_copy(char const *s, char c, char **str)
{
	const char	*wordstart;
	int			word_i;

	wordstart = NULL;
	word_i = 0;
	while (1)
	{
		if (*s != c && *s)
		{
			if (wordstart == NULL)
				wordstart = s;
		}
		else
		{
			if (wordstart != NULL)
			{
				str[word_i++] = ft_substr(wordstart, 0, s - wordstart);
				wordstart = NULL;
			}
			if (!*s)
				break ;
		}
		s++;
	}
	str[word_i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(ft_getwordcount(s, c) * sizeof(char *) + 1);
	if (!str)
		return (0);
	ft_copy(s, c, str);
	return (str);
}

int	main(void)
{
	char	**strarr = ft_split("\0aa\0bbb", '\0');
	int	i = 0;
	while (strarr[i])
	{
		printf("%s\n", strarr[i++]);
	//	free(strarr[i++]);
	}
//	free(strarr);
}
