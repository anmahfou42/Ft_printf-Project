/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:51:00 by anmahfou          #+#    #+#             */
/*   Updated: 2024/11/20 16:24:51 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa(unsigned long n, int *p, int a)
{
	char	digit;

	if (n >= 16)
	{
		put_hexa(n / 16, p, a);
	}
	if (a == 0)
		digit = "0123456789abcdef"[n % 16];
	else
		digit = "0123456789ABCDEF"[n % 16];
	write(1, &digit, 1);
	(*p)++;
	return (*p);
}
