/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:37:22 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:38:47 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*result;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		if (start <= end)
			result[i] = start + i;
		else
			result[i] = start - i;
	}
	return (result);
}

/*
#include <stdio.h>

int	main()
{
	int	i;
	int *result;

	result = ft_range(1, 3);
	i = -1;
	while (++i < 3)
		printf("%d ", result[i]);
	return (0);
}
*/
