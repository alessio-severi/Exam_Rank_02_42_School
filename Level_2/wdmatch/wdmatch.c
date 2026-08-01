/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:17:59 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:19:34 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = 0;
		j = 0;
		while (str1[i] && str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			j++;
		}
		if (!str1[i])
		{
			i = -1;
			while (str1[++i])
				write(1, &str1[i], 1);
		}
	}
	return (write(1, "\n", 1), 0);
}
