/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:10:10 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/09 22:47:33 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_insort(int *tab, int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (++i < ft_ilen(tab) && n--)
	{
		j = i;
		while (j && tab[j - 1] > tab[j])
		{
			ft_iswap(&tab[j], &tab[j - 1]);
			j--;
		}
	}
}
