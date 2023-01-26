/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 21:08:21 by salecler          #+#    #+#             */
/*   Updated: 2023/01/26 17:10:43 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(unsigned int k);
int		ft_isdigit(unsigned int k);
int		ft_isalnum(unsigned int k);
int		ft_isascii(unsigned int k);
int		ft_isprint(unsigned int k);
int		ft_toupper(unsigned int k);
int		ft_tolower(unsigned int k);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen_lib(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int k);
char	*ft_strrchr(const char *str, int k);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
void	*ft_memset(void *str, int c, unsigned int len);
void	*ft_bzero(void *str, unsigned int len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_calloc(size_t index, size_t len);
void	*ft_memchr(const void *str, int k, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif
