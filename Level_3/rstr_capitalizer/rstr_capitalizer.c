/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:46:14 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:46:16 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_word(char *str)
{
	int		i;
	int		flag;
	char	c;

	i = -1;
	while (str[++i])
	{
		if (!str[i + 1] || str[i + 1] == '\t' || str[i + 1] == ' ')
			flag = 1;
		else
			flag = 0;
		if (flag && str[i] >= 'a' && str[i] <= 'z')
			c = 'A' + str[i] - 'a';
		else if (!flag && str[i] >= 'A' && str[i] <= 'Z')
			c = 'a' + str[i] - 'A';
		else
			c = str[i];
		write (1, &c, 1);
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
			write (1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
