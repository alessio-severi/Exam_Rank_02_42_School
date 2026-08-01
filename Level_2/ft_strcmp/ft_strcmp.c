/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:04:07 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:04:34 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "hello";
	char *s2 = "hello";
	char *s3 = "hell";
	char *s4 = "world";
	char *s5 = "";
	char *s6 = "a";
	char *s7 = "abc";
	char *s8 = "abd";

	printf("1) ft = %d | strcmp = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("2) ft = %d | strcmp = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("3) ft = %d | strcmp = %d\n", ft_strcmp(s3, s1), strcmp(s3, s1));
	printf("4) ft = %d | strcmp = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("5) ft = %d | strcmp = %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
	printf("6) ft = %d | strcmp = %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
	printf("7) ft = %d | strcmp = %d\n", ft_strcmp(s6, s5), strcmp(s6, s5));
	printf("8) ft = %d | strcmp = %d\n", ft_strcmp(s7, s8), strcmp(s7, s8));

	return (0);
}
*/