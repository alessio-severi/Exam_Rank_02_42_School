/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:03:17 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:03:41 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
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

/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_atoi("-14"));
	return (0);
}
*/
