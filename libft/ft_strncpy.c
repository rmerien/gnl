/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 22:49:13 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/09 11:50:56 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmp;

	tmp = dst;
	while (len--)
	{
		if (*src)
			*tmp++ = *src++;
		else
			*tmp++ = '\0';
	}
	return (dst);
}
