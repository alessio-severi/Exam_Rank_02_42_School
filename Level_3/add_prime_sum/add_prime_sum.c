/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:22:16 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:22:50 by aseveri          ###   ########.fr       */
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

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
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
	char	*str;
	int		i;
	int		n;
	int		sum;

	if (argc == 2)
	{
		str = argv[1];
		sum = 0;
		n = ft_atoi(str);
		i = 2;
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbrp(sum);
	}
	write(1, "\n", 1);
	return (0);
}
