/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chalys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:59:09 by chalys            #+#    #+#             */
/*   Updated: 2021/11/12 23:59:20 by chalys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
int		ft_memcmp(const	void *s1, const	void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *buf, int ch, size_t count);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const	char *s);
char	*ft_strrchr(const	char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memcpy(void *dst, const	void *src, size_t	n);
void	*ft_memchr(const	void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n,	int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize);
int		ft_strncmp(const	char *s1, const	char *s2, size_t n);
char	*ft_strnstr(const	char *haystack, const char *neddle,	size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const	char *s1);
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize);
int		ft_atoi(const char *str);
char	*ft_substr(char	const *s, unsigned	int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char	const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
