/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:23:24 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:25:12 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return (c == '\t' || c == ' ');
}

void	d_words(char *str, int *i_words)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
		i++;
	i_words[0] = i;
	while (str[i])
		i++;
	i--;
	while (i >= 0 && is_space(str[i]))
		i--;
	i_words[1] = i;
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		i_words[2];

	if (argc == 2)
	{
		str = argv[1];
		d_words(str, i_words);
		i = i_words[0];
		while (i <= i_words[1])
		{
			if (!is_space(str[i]))
				write(1, &str[i], 1);
			else if (!is_space(str[i + 1]))
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
