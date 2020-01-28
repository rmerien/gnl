/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:55:13 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/07 17:55:42 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	start = 0;
	if (!s)
		return (NULL);
	end = (int)ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while ((s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
			&& end > start)
		end--;
	return (ft_strsub(s, start, (end - start)));
}
