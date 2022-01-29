/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:20:27 by chalys            #+#    #+#             */
/*   Updated: 2021/12/15 22:36:53 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_printx(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_printx(num / 16, format);
		ft_printx(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - '10' + 'a', 1));
			if (format == 'X')
				ft_putchar_fd((num - '10' + 'A', 1));
		}
	}
}

int	ft_printxX(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_printx(num, format);
	return (ft_printx_len(num));
}
