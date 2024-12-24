/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:51:10 by anmahfou          #+#    #+#             */
/*   Updated: 2024/11/20 16:09:50 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_nbr(int n, int *p)
{
	long	nb;
	char	digit;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		(*p)++;
	}
	if (nb >= 10)
	{
		put_nbr(nb / 10, p);
	}
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
	(*p)++;
	return (*p);
}
