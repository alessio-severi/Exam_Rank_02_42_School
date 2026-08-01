/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:12:39 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:14:34 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	char	c;

	if (argc == 2)
	{
		str = argv[1];
		i = -1;
		while (str[++i])
		{
			if (str[i] == '-')
				continue ;
			if (i > 0 && str[i - 1] == '-'
				&& str[i] >= 'a' && str[i] <= 'z')
				c = 'A' + str[i] - 'a';
			else
				c = str[i];
			write (1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
