/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:29:54 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 22:30:18 by aseveri          ###   ########.fr       */
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
		while (is_space(str[i]))
			i++;
		start = i;
		while (str[i] && !is_space(str[i]))
			i++;
		end = i - 1;
		while (start <= end)
			write(1, &str[start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
