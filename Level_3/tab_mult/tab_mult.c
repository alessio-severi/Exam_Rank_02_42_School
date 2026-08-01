/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:47:11 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:48:30 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrp(int n)
{
	char	c;

	if (n > 9)
		ft_putnbrp(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	sgn;

	n = 0;
	sgn = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sgn = -1;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return (sgn * n);
}

int	main(int argc, char **argv)
{
	int		n;
	int		i;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n > 0)
		{
			i = 0;
			while (++i < 10)
			{
				ft_putnbrp(i);
				write (1, " x ", 3);
				ft_putnbrp(n);
				write (1, " = ", 3);
				ft_putnbrp(i * n);
				write (1, "\n", 1);
			}
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
