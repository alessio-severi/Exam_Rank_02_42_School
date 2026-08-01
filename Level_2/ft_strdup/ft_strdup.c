/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:05:27 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:05:53 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*result;

	len = ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < len)
		result[i] = src[i];
	result[i] = 0;
	return (result);
}

/*
#include <stdio.h>

int main()
{
	printf("%s", ft_strdup("hello word"));
	return (0);
}
*/
