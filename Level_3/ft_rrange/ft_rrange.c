/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:39:14 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:39:39 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*result;
	int	len;

	if (end <= start)
		len = start - end + 1;
	else
		len = end - start + 1;
	result = (int *)malloc(sizeof(int) * len);
	i = -1;
	while (++i < len)
	{
		if (end <= start)
			result[i] = end + i;
		else
			result[i] = end - i;
	}
	return (result);
}

/*
#include <stdio.h>

int	main()
{
	int	*result;
	int	i;

	result = ft_rrange(-1, 2);
	i = -1;
	while (++i < 4)
		printf("%d", result[i]);
	return (0);
}
*/
