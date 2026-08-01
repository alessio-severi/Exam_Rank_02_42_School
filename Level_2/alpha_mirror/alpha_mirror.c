/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:00:03 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:00:31 by aseveri          ###   ########.fr       */
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
			if (str[i] >= 'A' && str[i] <= 'Z')
				c = 'A' + 'Z' - str[i];
			else if (str[i] >= 'a' && str[i] <= 'z')
				c = 'a' + 'z' - str[i];
			else
				c = str[i];
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
