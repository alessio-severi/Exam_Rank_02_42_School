/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:14:55 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:14:57 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

/*
#include <stdio.h>

int	main()
{
	printf("%x", swap_bits(0x41));
	return (0);
}
*/
