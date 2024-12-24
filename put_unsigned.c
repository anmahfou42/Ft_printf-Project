/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:47:52 by anmahfou          #+#    #+#             */
/*   Updated: 2024/11/20 16:09:50 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned(unsigned int n, int *p)
{
	char	digit;

	if (n >= 10)
		put_unsigned(n / 10, p);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
	(*p)++;
	return (*p);
}
