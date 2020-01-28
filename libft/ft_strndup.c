/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:41:34 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 18:02:24 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;

	if (!(s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	ft_strncpy(s2, s1, n);
	return (s2);
}
