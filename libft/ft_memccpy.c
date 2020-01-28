/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 19:28:39 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 13:37:24 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src++;
		if ((unsigned char)c == *(unsigned char *)dst++)
			return (dst);
	}
	return (NULL);
}
