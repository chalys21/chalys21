/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <chalys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:45:10 by chalys            #+#    #+#             */
/*   Updated: 2022/01/07 13:19:52 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_rd_text(int fd, char *text)
{
	char	*buf;
	int		rd_bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(text, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buf, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free (buf);
			return (NULL);
		}
		buf[rd_bytes] = '\0';
		text = ft_strjoin(text, buf);
	}
	free(buf);
	return (text);
}

char	*ft_line(char *text)
{
	int		i;
	char	*str;

	i = 0;
	if (!text[i])
		return (NULL);
	while (text[i] && text[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		str[i] = text[i];
		i++;
	}
	if (text[i] == '\n')
	{
		str[i] = text[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_line(char *text)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (text[i] && text[i] != '\n')
		i++;
	if (!text[i])
	{
		free (text);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(text) - i + 1));
	if (!text[i])
		return (NULL);
	i++;
	j = 0;
	while (text[i])
		str[j++] = text[i++];
	str[j] = '\0';
	free (text);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*text;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	text = ft_rd_text(fd, text);
	if (!text)
		return (NULL);
	line = ft_line (text);
	text = ft_new_line(text);
	return (line);
}
