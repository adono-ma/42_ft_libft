/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:55:40 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 16:25:16 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int i);
int ft_strlen(const char *str);
int ft_isascii(int i);
int ft_isdigit(int i);
int ft_isprint(int i);
int ft_strlen(const char *str);
int ft_isascii(int i);
int ft_atoi(const   char *str);
void    ft_bzero(void   *trs, size_t    n);
void    *ft_calloc(size_t nitems, size_t size);
void    *ft_memset(void *str, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
char    *strchr(const char *str, int c);
char    *strrchr(const char *str, int c);
size_t  ft_strlcat(char    *dest, const char *src, size_t  n);
size_t  ft_strlcpy(char    *dest, const char *src, size_t  n);
int strncmp(const char *str1, const char *str2, size_t n);
int *ft_strnstr(const char *haystack, const char *needle, size_t n);
int ft_tolower(int  c);
int ft_toupper(int  c);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif