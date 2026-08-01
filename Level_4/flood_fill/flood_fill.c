/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseveri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 23:51:24 by aseveri           #+#    #+#             */
/*   Updated: 2026/07/31 23:57:11 by aseveri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill_tool(char **tab, t_point size, int y, int x, char target)
{
	if (y < 0 || y >= size.y || x < 0 || x >= size.x)
		return ;
	if (tab[y][x] != target)
		return ;
	tab[y][x] = 'F';
	flood_fill_tool(tab, size, y, x + 1, target);
	flood_fill_tool(tab, size, y, x - 1, target);
	flood_fill_tool(tab, size, y + 1, x, target);
	flood_fill_tool(tab, size, y - 1, x, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	flood_fill_tool(tab, size, begin.y, begin.x, target);
}
