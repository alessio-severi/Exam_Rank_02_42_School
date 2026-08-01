/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:06:47 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:07:38 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	len = ft_len(str);
	i = -1;
	while (++i < len / 2)
		ft_swap(&str[i], &str[len - 1 - i]);
	return (str);
}

/*
#include <stdio.h>

int	main()
{
	char	arr[12] = "hello world";

	printf("%s", ft_strrev(arr));
	return (0);
}
*/
