/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:24:28 by imahri            #+#    #+#             */
/*   Updated: 2022/11/11 10:32:16 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hput(unsigned long long nb, int *len)
{
	char		*s;

	s = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(s[nb], len);
	if (nb >= 16)
	{
		ft_hput((nb / 16), len);
		ft_putchar ((s[nb % 16]), len);
	}
}

void	ft_pointer(unsigned long long nb, int *len)
{
	ft_putstr("0x", len);
	ft_hput(nb, len);
}
