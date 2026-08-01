/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:42:14 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:42:36 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrp(int n)
{
	char	c;

	if (n > 9)
		ft_putnbrp(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_putnbrp(--argc);
	write (1, "\n", 1);
	return (0);
}
