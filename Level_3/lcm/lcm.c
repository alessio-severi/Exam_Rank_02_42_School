/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:40:52 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:41:47 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	mcd;

	mcd = 0;
	if (!a || !b)
		return (mcd);
	i = 1;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			mcd = i;
		i++;
	}
	return (a * b / mcd);
}

/*
#include <stdio.h>

int	main()
{
	printf("%u", lcm(0, 3));
	return (0);
}
*/
