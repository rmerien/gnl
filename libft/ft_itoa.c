/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 01:03:35 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 13:50:46 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len_str(int nb)
{
	int len;

	len = (nb <= 0) ? 1 : 0;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			len;
	int			sign;
	char		*str;

	sign = (n < 0) ? -1 : 1;
	len = ft_len_str(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
