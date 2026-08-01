/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:44:28 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:45:50 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrhex(int n)
{
	const char	*base = "0123456789abcdef";

	if (n > 15)
		ft_putnbrhex(n / 16);
	write(1, &base[n % 16], 1);
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
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n >= 0)
			ft_putnbrhex(n);
	}
	write(1, "\n", 1);
	return (0);
}
