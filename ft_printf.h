/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:32:17 by imahri            #+#    #+#             */
/*   Updated: 2022/11/09 19:45:08 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(long long nb, int *len);
void	ft_hputnbr(unsigned int nb, int *len);
void	ft_heputnbr(unsigned int nbr, int *len);
void	ft_pointer(unsigned long long nbr, int *len);
void	ft_unsigned(unsigned int nb, int *len);

int		ft_printf(const char *s, ...);

#endif