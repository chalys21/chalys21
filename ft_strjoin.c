/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:18:27 by chalys            #+#    #+#             */
/*   Updated: 2021/10/25 21:06:45 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	len;
	char	*newstr;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen(s2);
	len = s1len + s2len + 1;
	newstr = malloc(sizeof(char) * len);
	if (!newstr)
		return (0);
	ft_memmove(newstr, s1, s1len);
	ft_memmove(newstr + s1len, s2, s2len);
	newstr[len - 1] = '\0';
	return (newstr);
}
