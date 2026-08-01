/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:46:36 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:46:53 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_word(char *str)
{
	int		i;
	char	c;
	int		flag;

	flag = 1;
	i = -1;
	while (str[++i])
	{
		if (flag && str[i] >= 'a' && str[i] <= 'z')
			c = 'A' + str[i] - 'a';
		else if (!flag && str[i] >= 'A' && str[i] <= 'Z')
			c = 'a' + str[i] - 'A';
		else
			c = str[i];
		if (str[i] == '\t' || str[i] == ' ')
			flag = 1;
		else
			flag = 0;
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			print_word(argv[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
