/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:25:44 by imahri            #+#    #+#             */
/*   Updated: 2022/11/11 19:26:28 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	fun(va_list p, char c, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(p, int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(p, int), len);
	else if (c == 'p')
		ft_pointer(va_arg(p, unsigned long long), len);
	else if (c == 'x')
		ft_hputnbr(va_arg(p, unsigned int), len);
	else if (c == 'X')
		ft_heputnbr(va_arg(p, unsigned int), len);
	else if (c == 'u')
		ft_unsigned(va_arg(p, unsigned int), len);
	else if (c == 's')
		ft_putstr(va_arg(p, char *), len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	var;

	i = 0;
	len = 0;
	va_start (var, s);
	while (s[i])
	{
		if (s[i] == '%' && !s[i + 1])
			break ;
		if (s[i] == '%')
			fun (var, s[++i], &len);
		else
			ft_putchar (s[i], &len);
		i++;
	}
	va_end (var);
	return (len);
}
