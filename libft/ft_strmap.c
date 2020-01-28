/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 04:09:29 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 12:11:42 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*new_string;
	size_t		len;
	int			i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(new_string = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	new_string[len] = '\0';
	i = -1;
	while (s[++i])
		new_string[i] = (*f)(s[i]);
	return (new_string);
}
