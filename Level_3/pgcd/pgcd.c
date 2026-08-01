/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:43:47 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:44:02 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	i;
	int	mcd;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		i = 1;
		while (i <= n1 && i <= n2)
		{
			if (n1 % i == 0 && n2 % i == 0)
				mcd = i;
			i++;
		}
		if (n1 > 0 && n2 > 0)
			printf("%d", mcd);
	}
	printf("\n");
	return (0);
}
