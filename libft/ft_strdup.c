/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 22:22:35 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 11:29:02 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!(s2 = malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
