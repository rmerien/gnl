/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 02:38:04 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 03:05:23 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	new = 0;
	if (!ptr)
	{
		if (!(new = malloc(size)))
			return (0);
		return (new);
	}
	if (!size)
	{
		if (!(new = malloc(1)))
			return (0);
	}
	else
	{
		if (!(new = malloc(size)))
			return (0);
		ft_memcpy(new, ptr, size);
	}
	ft_memdel(&ptr);
	return (new);
}
