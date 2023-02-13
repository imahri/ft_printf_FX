/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:48:00 by imahri            #+#    #+#             */
/*   Updated: 2022/11/10 12:57:42 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hputnbr(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(s[nb], len);
	else
	{
		ft_hputnbr (nb / 16, len);
		ft_putchar ((s[nb % 16]), len);
	}
}
