/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:58:22 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 11:17:24 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tdst;
	char *tsrc;

	tdst = (char *)dst;
	tsrc = (char *)src;
	while (n--)
		*tdst++ = *tsrc++;
	return (dst);
}
