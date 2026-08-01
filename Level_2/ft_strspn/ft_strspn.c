/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:08:01 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:08:02 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			return (i);
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(void)
{
	printf("1) ft = %zu | libc = %zu\n",
		ft_strspn("abcdef", "abc"), strspn("abcdef", "abc"));

	printf("2) ft = %zu | libc = %zu\n",
		ft_strspn("12345abc", "1234567890"), strspn("12345abc", "1234567890"));

	printf("3) ft = %zu | libc = %zu\n",
		ft_strspn("hello", "hel"), strspn("hello", "hel"));

	printf("4) ft = %zu | libc = %zu\n",
		ft_strspn("abcdef", "xyz"), strspn("abcdef", "xyz"));

	printf("5) ft = %zu | libc = %zu\n",
		ft_strspn("", "abc"), strspn("", "abc"));

	printf("6) ft = %zu | libc = %zu\n",
		ft_strspn("abcdef", ""), strspn("abcdef", ""));

	printf("7) ft = %zu | libc = %zu\n",
		ft_strspn("aaaaab", "a"), strspn("aaaaab", "a"));

	return (0);
}
*/