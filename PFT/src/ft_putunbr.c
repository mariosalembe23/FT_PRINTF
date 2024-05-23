/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalembe <msalembe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:20:56 by msalembe          #+#    #+#             */
/*   Updated: 2024/05/23 15:17:45 by msalembe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putunbr(unsigned int u)
{
	int	len;

	len = 0;
	if (u <= 9)
	{
		ft_putstr_char(u + '0');
		len++;
	}
	if (u >= 10)
	{
		len += ft_putnbr(u / 10);
		len += ft_putnbr(u % 10);
	}
	return (len);
}
