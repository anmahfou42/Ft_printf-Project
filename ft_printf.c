/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:03:14 by anmahfou          #+#    #+#             */
/*   Updated: 2024/11/21 17:30:47 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	cheek_part1(int *i, int *count, va_list ap, const char *format)
{
	if (format[*i] == 'c')
	{
		put_char(va_arg(ap, int));
		(*i)++;
		(*count)++;
	}
	else if (format[*i] == 'd' || format[*i] == 'i')
	{
		*count = put_nbr(va_arg(ap, int), count);
		(*i)++;
	}
	else if (format[*i] == 's')
	{
		*count = put_str(va_arg(ap, char *), count);
		(*i)++;
	}
	else if (format[*i] == 'u')
	{
		*count = put_unsigned(va_arg(ap, int), count);
		(*i)++;
	}
	else
		return (0);
	return (1);
}

static void	cheek_part2(int *i, int *count, va_list ap, const char *format)
{
	unsigned int	num;

	if (format[*i] == 'x' || format[*i] == 'X')
	{
		num = va_arg(ap, unsigned int);
		if (format[*i] == 'x')
			*count = put_hexa(num, count, 0);
		else
			*count = put_hexa(num, count, 1);
		(*i)++;
	}
	else if (format[*i] == 'p')
	{
		*count = put_ptr(va_arg(ap, void *), count);
		(*i)++;
	}
	else if (format[*i] == '%')
	{
		put_char('%');
		(*i)++;
		(*count)++;
	}
	else
		(*i)++;
}

static int	cheek_part(int *i, int *count, va_list ap, const char *format)
{
	if (format[*i] == '%')
	{
		(*i)++;
		if (format[*i])
		{
			if (!cheek_part1(i, count, ap, format))
			{
				cheek_part2(i, count, ap, format);
			}
		}
	}
	else
	{
		put_char(format[*i]);
		(*count)++;
		(*i)++;
	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
	{
		return (-1);
	}
	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		cheek_part(&i, &count, ap, format);
	}
	va_end(ap);
	return (count);
}
