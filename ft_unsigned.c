/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:45:38 by imahri            #+#    #+#             */
/*   Updated: 2022/11/11 07:56:52 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int nb, int *len)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, len);
	if (nb >= 10)
	{
		ft_putnbr (nb / 10, len);
		ft_putchar ((nb % 10) + 48, len);
	}
}
