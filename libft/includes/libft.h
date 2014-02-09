/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:52:36 by adjivas           #+#    #+#             */
/*   Updated: 2013/12/03 13:00:20 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef						LIBFT_H
# define					LIBFT_H

/*
** Standard lib.
*/

void						*ft_memset(void *, int, unsigned long);
void						ft_bzero(void *, unsigned long);
void						*ft_memcpy(void *__restrict,
									   const void *__restrict,
									   unsigned long);
void						*ft_memccpy(void *__restrict,
										const void *__restrict,
										int c,
										unsigned long);
void						*ft_memmove(void *, const void *,
										unsigned long);
void						*ft_memchr(const void *, int c,
									   unsigned long);
int							ft_memcmp(const void *, const void *,
									  unsigned long);
unsigned long				ft_strlen(const char *);
char						*ft_strdup(const char *);
char						*ft_stpcpy(char *, const char *);
char						*ft_stpncpy(char *__restrict,
										const char *__restrict,
										unsigned long);
char						*ft_strcat(char *__restrict,
									   const char *__restrict);
char						*ft_strncat(char *__restrict,
										const char *__restrict,
										unsigned long);
char						*ft_strchr(const char *, int);
char						*ft_strrchr(const char *, int);
int							ft_strcmp(const char *, const char *);
char						*ft_strcpy(char *, char const *);
int							ft_strncmp(const char *, const char *,
									   unsigned long);
char						*ft_strncpy(char *, char const *,
										unsigned long);
int							ft_atoi(const char *);
int							ft_isalpha(int);
int							ft_isdigit(int);
int							ft_isalnum(int);
int							ft_isascii(int);
int							ft_isprint(int);
int							ft_toupper(int);
int							ft_tolower(int);
char						*ft_strstr(const char *, const char *);
char						*ft_strnstr(const char *, const char *,
										unsigned long);

/*
** 42's	lib.
*/

void						*ft_memalloc(unsigned long);
void						ft_memdel(void **);
char						*ft_strnew(unsigned long);
void						ft_strdel(char **);
void						ft_strclr(char *);
void						ft_striter(char *, void (*f)(char *));
void						ft_striteri(char *, void (*f)(unsigned int,
										char *));
char						*ft_strmap(char const *, char (*f)(char));
char						*ft_strmapi(char const *,
										char (*f)(unsigned int, char));
int							ft_strequ(char const *, char const *);
int							ft_strnequ(char const *, char const *,
									   unsigned long);
char						*ft_strsub(char const *, unsigned int,
									   unsigned long);
char						*ft_strjoin(char const *, char const *);
char						*ft_itoa(int);
void						ft_putchar(char c);
void						ft_putstr(char const *);
void						ft_putendl(char const *);
void						ft_putnbr(int);
void						ft_putchar_fd(char c, int fd);
void						ft_putstr_fd(char const *, int fd);
void						ft_putendl_fd(char const *, int fd);
void						ft_putnbr_fd(int, int);
char						*ft_strtrim(char const *);

/*
** Personnel's lib.
*/

const char					*ft_chardup(unsigned char);
void						ft_putstr_fd_len(char const *, int, unsigned long);

#endif						/* !LIBFT_H */
