/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 01:07:26 by aseveri           #+#    #+#             */
/*   Updated: 2026/08/01 01:39:13 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		visited[256];
	int		i;
	int		j;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		i = -1;
		while (++i < 256)
			visited[i] = 0;
		i = -1;
		while (str1[++i])
		{
			j = -1;
			while (str2[++j] && !visited[(unsigned char)str1[i]])
			{
				if (str1[i] == str2[j])
				{
					write(1, &str1[i], 1);
					visited[(unsigned char)str1[i]] = 1;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
