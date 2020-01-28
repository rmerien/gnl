/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerien <rmerien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 02:29:46 by rmerien           #+#    #+#             */
/*   Updated: 2018/11/10 02:30:01 by rmerien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_do_op(int nbr1, int nbr2, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = nbr1 + nbr2;
	else if (op == '-')
		result = nbr1 - nbr2;
	else if (op == '*')
		result = nbr1 * nbr2;
	else if (op == '/')
		result = (nbr2 != 0) ? (nbr1 / nbr2) : result;
	else if (op == '%')
		result = (nbr2 != 0) ? (nbr1 % nbr2) : result;
	return (result);
}
