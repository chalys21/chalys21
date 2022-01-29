/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:57:04 by chalys            #+#    #+#             */
/*   Updated: 2021/12/12 18:24:27 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include "libft.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (str)
	{
		while (str[i] != '\0')
			write(1, &str[i++], 1);
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	i = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printprct(void)
{
	write(1, "%", 1);
	return (1);
}
