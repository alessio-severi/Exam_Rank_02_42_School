/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:54:40 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 22:55:26 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc == 4 && argv[2][0] && argv[3][0]
		&& !argv[2][1] && !argv[3][1])
	{
		str = argv[1];
		i = -1;
		while (str[++i])
		{
			if (str[i] == *(argv[2]))
				write(1, argv[3], 1);
			else
				write(1, &str[i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
