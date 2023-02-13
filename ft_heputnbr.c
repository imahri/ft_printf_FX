/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:54:24 by imahri            #+#    #+#             */
/*   Updated: 2022/11/10 12:56:14 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_heputnbr(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(s[nb], len);
	else
	{
		ft_heputnbr (nb / 16, len);
		ft_putchar ((s[nb % 16]), len);
	}
}
