/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:09:21 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:09:43 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == '\t' || c == ' ');
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i])
			i++;
		i--;
		while (i >= 0 && is_space(str[i]))
			i--;
		end = i;
		while (i >= 0 && !is_space(str[i]))
			i--;
		start = i + 1;
		while (start <= end)
			write(1, &str[start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
