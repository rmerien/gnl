/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 04:20:28 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 12:12:46 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		new_string[i] = (*f)(i, s[i]);
	return (new_string);
}
