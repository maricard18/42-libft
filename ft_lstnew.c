/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:39:54 by maricard          #+#    #+#             */
/*   Updated: 2022/11/24 14:41:25 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

int main(void)
{
	t_list 	*node = ft_lstnew("ola tudo bem");

	printf("%s\n", (char *)(node->content));

	return 0;
}
