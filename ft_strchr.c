/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:13:57 by chalys            #+#    #+#             */
/*   Updated: 2021/11/10 20:43:54 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	pt;
	char	*tt;

	i = 0;
	pt = (char) c;
	tt = (char *) s;
	if (pt == '\0')
		return (&tt[ft_strlen(tt)]);
	while (tt)
	{
		if (tt[i] == pt)
			return (&tt[i]);
		else
			i++;
		if (tt[i] == '\0')
			return (0);
	}
	return (0);
}
