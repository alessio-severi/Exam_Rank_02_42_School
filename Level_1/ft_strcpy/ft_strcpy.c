/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 22:37:59 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 22:39:09 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1)
		s2[i++] = *s1++;
	s2[i] = 0;
	return (s2);
}

/*
#include <stdio.h>

int main()
{
	char *s1 = "hello world";
	char *s2;

	ft_strcpy(s1, s2);
	printf("%s", s2);
	return (0);
}
*/
