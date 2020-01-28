/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:27:01 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 18:29:34 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		len_dst;
	size_t		len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (len_dst + i + 1 < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst + i < dstsize)
		dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
