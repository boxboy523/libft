/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyekim <junyekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:56:00 by junyekim          #+#    #+#             */
/*   Updated: 2023/10/07 21:53:25 by junyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
void	ft_bzero(void *s, int n);
void	*ft_calloc(int count, int size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memchr(const void *s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, int n);
void	*ft_memmove(void *dst, const void *src, int len);
void	*ft_memset(void *ptr, int value, int num);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
int		ft_strlcat(char *restrict dst, const char *restrict src, int dstsize);
int		ft_strlcpy(char *restrict dst, const char *restrict src, int dstsize);
int		ft_strlen(const char *c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*strnstr(const char *haystack, const char *needle, unsigned int len);
char	*strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif