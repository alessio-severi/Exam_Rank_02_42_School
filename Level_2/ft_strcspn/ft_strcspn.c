/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:04:57 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:04:59 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int	main(void)
{
	printf("1) ft = %zu | libc = %zu\n",
		ft_strcspn("hello", "l"), strcspn("hello", "l"));

	printf("2) ft = %zu | libc = %zu\n",
		ft_strcspn("abcdef", "x"), strcspn("abcdef", "x"));

	printf("3) ft = %zu | libc = %zu\n",
		ft_strcspn("abcdef", "cd"), strcspn("abcdef", "cd"));

	printf("4) ft = %zu | libc = %zu\n",
		ft_strcspn("", "abc"), strcspn("", "abc"));

	printf("5) ft = %zu | libc = %zu\n",
		ft_strcspn("abcdef", ""), strcspn("abcdef", ""));

	printf("6) ft = %zu | libc = %zu\n",
		ft_strcspn("12345abc", "abc"), strcspn("12345abc", "abc"));

	printf("7) ft = %zu | libc = %zu\n",
		ft_strcspn("abc", "abc"), strcspn("abc", "abc"));

	return (0);
}
*/