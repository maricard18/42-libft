/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:43:12 by maricard          #+#    #+#             */
/*   Updated: 2022/11/14 18:22:26 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_write('-');
		n = n * -1;
	}
	if (n < 10 )
		ft_write(n + '0');
	else
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
}

int main()
{
	ft_putnbr_fd(5, &%);
}	
