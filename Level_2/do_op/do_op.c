/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:02:06 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:02:26 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	*op;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		op = argv[2];
		if (*op == '+')
			printf("%d", n1 + n2);
		else if (*op == '-')
			printf("%d", n1 - n2);
		else if (*op == '*')
			printf("%d", n1 * n2);
		else if (*op == '%' && n2)
			printf("%d", n1 % n2);
		else if (*op == '/' && n2)
			printf("%d", n1 / n2);
	}
	printf("\n");
	return (0);
}
