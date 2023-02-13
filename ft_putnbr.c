/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:20:54 by imahri            #+#    #+#             */
/*   Updated: 2022/11/10 12:59:19 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long nb, int *len)
{
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-', len);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, len);
	if (nb >= 10)
	{
		ft_putnbr (nb / 10, len);
		ft_putchar ((nb % 10) + 48, len);
	}
}
