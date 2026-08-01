/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:06:21 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:06:23 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
		}
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int	main(void)
{
	printf("1) ft = %s | libc = %s\n",
		ft_strpbrk("hello", "l"), strpbrk("hello", "l"));

	printf("2) ft = %s | libc = %s\n",
		ft_strpbrk("abcdef", "xz"), strpbrk("abcdef", "xz"));

	printf("3) ft = %s | libc = %s\n",
		ft_strpbrk("abcdef", "dx"), strpbrk("abcdef", "dx"));

	printf("4) ft = %s | libc = %s\n",
		ft_strpbrk("12345abc", "ca"), strpbrk("12345abc", "ca"));

	printf("5) ft = %p | libc = %p\n",
		(void *)ft_strpbrk("abcdef", "xyz"),
		(void *)strpbrk("abcdef", "xyz"));

	printf("6) ft = %p | libc = %p\n",
		(void *)ft_strpbrk("", "abc"),
		(void *)strpbrk("", "abc"));

	printf("7) ft = %p | libc = %p\n",
		(void *)ft_strpbrk("abcdef", ""),
		(void *)strpbrk("abcdef", ""));

	return (0);
}
*/