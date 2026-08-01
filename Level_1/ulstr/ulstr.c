/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:55:52 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 22:55:56 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	int		i;

	if (argc == 2)
	{
		str = argv[1];
		i = -1;
		while (str[++i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				c = 'a' + str[i] - 'A';
			else if (str[i] >= 'a' && str[i] <= 'z')
				c = 'A' + str[i] - 'a';
			else
				c = str[i];
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
