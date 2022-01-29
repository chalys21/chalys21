/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:59:42 by chalys            #+#    #+#             */
/*   Updated: 2021/11/10 20:35:49 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void	*buf, int	ch,	size_t	count)
{
	int				i;
	unsigned char	*pr;

	i = 0;
	pr = (unsigned char *) buf;
	while (count > 0)
	{
		*pr++ = ch;
		count--;
	}
	return (&buf[0]);
}
