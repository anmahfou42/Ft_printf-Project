/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmahfou <anmahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:50:02 by anmahfou          #+#    #+#             */
/*   Updated: 2024/11/20 16:06:50 by anmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	put_nbr(int n, int *p);
int	put_hexa(unsigned long n, int *p, int a);
int	put_str(char *s, int *p);
int	put_unsigned(unsigned int n, int *p);
int	put_ptr(void *ptr, int *p);
int	put_char(char c);
int	ft_printf(const char *format, ...);
#endif