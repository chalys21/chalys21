/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:42:07 by chalys            #+#    #+#             */
/*   Updated: 2021/11/10 23:03:25 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendst;

	j = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = lendst;
	if (dstsize == 0 )
		return (lensrc);
	if (dstsize < lendst)
		return (lensrc + dstsize);
	else
	{
		while (src[j] && (lendst + j) < dstsize)
			dst[i++] = src[j++];
		if ((lendst + j) == dstsize && lendst < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (lensrc + lendst);
	}
}
