/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:50:15 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 22:50:37 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		end;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			if (*str >= 'A' && *str <= 'Z')
				*str = 'a' + *str - 'A';
			if (*str >= 'a' && *str <= 'z')
			{
				end = (int)(*str - 'a') + 1;
				i = -1;
				while (++i < end)
					write(1, str, 1);
			}
			else
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
