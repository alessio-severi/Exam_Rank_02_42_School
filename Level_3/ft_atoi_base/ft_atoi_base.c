/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:27:05 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:29:08 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	search_digit(char c, int str_base)
{
	const char	*base1 = "0123456789ABCDEF";
	const char	*base2 = "0123456789abcdef";
	int			j;

	j = -1;
	while (++j < str_base)
	{
		if (c == base1[j] || c == base2[j])
			return (j);
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	n;
	int	sgn;

	if (str_base < 2 || str_base > 16)
		return (0);
	n = 0;
	sgn = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sgn = -1;
	while (search_digit(*str, str_base) != -1)
		n = n * str_base + search_digit(*str++, str_base);
	return (sgn * n);
}

/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_atoi_base("-A", 16));
	return (0);
}
*/
