/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:38:08 by chalys            #+#    #+#             */
/*   Updated: 2021/12/12 18:00:27 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list argc, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_printchar(va_arg(argc, int));
	else if (format == 's')
		print += ft_printstr(va_arg(argc, char *));
	else if (format == 'd' || format == 'i')
		print += ft_printnbr(va_arg(argc, int));
	else if
	else if (format == '%')
		print += ft_printprct();
	return (print);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			length;
	va_list		argc;

	i = 0;
	length = 0;
	va_start(argc, format)
	while (format[i])
	{
		if (format[i] == "%")
		{
			length = ft_format(argc, format[i + 1]);
			i++;
		}
		else if
			length = ft_printchar(format[i]);
			i++;
	}
	va_end(argc);
	return (length);
}
