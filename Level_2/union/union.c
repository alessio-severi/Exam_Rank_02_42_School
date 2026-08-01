/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:15:19 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:17:38 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_union(unsigned char *str, int *visited)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!visited[str[i]])
		{
			write(1, &str[i], 1);
			visited[str[i]] = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;
	int				visited[256];

	if (argc == 3)
	{
		str1 = (unsigned char *)argv[1];
		str2 = (unsigned char *)argv[2];
		i = -1;
		while (++i < 255)
			visited[i] = 0;
		print_union(str1, visited);
		print_union(str2, visited);
	}
	write(1, "\n", 1);
	return (0);
}
