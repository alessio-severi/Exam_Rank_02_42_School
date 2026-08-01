/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:12:15 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:12:17 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = -1;
	while (++i < 8)
		result = result * 2 + ((octet >> i) & 1);
	return (result);
}

/*
#include <stdio.h>

int	main()
{
	printf("%x", reverse_bits(0x26));
	return (0);
}
*/
