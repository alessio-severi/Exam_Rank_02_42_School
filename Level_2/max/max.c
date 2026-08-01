/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:10:02 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:11:07 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	max = 0;
	if (len > 0)
		max = tab[0];
	i = 0;
	while (++i < len)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	return (max);
}

/*
#include <stdio.h>

int	main()
{
	int	array[3] = {1, 2, 3};

	printf("%d", max(array, 3));
	return (0);
}
*/
