/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <chalys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:45:30 by chalys            #+#    #+#             */
/*   Updated: 2021/11/28 15:52:48 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *text, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!text)
	{
		text = (char *)malloc(1 * sizeof(char));
		text[0] = '\0';
	}
	if (!text || !buf)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(text) + ft_strlen(buf)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (text)
		while (text[++i] != '\0')
			str[i] = text[i];
	while (buf[j] != '\0')
		str[i++] = buf[j++];
	str[ft_strlen(text) + ft_strlen(buf)] = '\0';
	free(text);
	return (str);
}
