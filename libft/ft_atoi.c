/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:22:56 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 18:03:26 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long long	res;
	int			sign;

	res = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	sign = (*str == '-' ? (-1) : 1);
	(*str == '-' || *str == '+') ? str++ : 0;
	while (*str > 47 && *str < 58)
	{
		res = (res * 10) + (*str++ - 48);
		if (res < 0)
			return ((sign == 1) ? -1 : 0);
	}
	return ((int)(res * sign));
}
