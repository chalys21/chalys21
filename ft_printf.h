/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:56:06 by chalys            #+#    #+#             */
/*   Updated: 2021/12/12 17:02:05 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <strdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const	char *format, ...);
int		ft_printchar(int c);
int		ft_format(va_list argc, const char format);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printprct(void);
int		ft_printpointer(unsigned long long ptr);

#endif
