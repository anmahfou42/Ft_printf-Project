/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:51:17 by anmahfou          #+#    #+#             */
/*   Updated: 2024/12/04 15:53:31 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_ptr(void *ptr, int *p)
{
	unsigned long	addr;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		*p += 5;
		return (*p);
	}
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	*p += 2;
	return (put_hexa(addr, p, 0));
}
