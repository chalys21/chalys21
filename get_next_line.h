/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <chalys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:44:50 by chalys            #+#    #+#             */
/*   Updated: 2021/11/28 16:00:37 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_rd_text(int fd, char *text);
char	*ft_strjoin(char *text, char *buf);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*ft_line(char *text);
char	*ft_new_line(char *text);

#endif
