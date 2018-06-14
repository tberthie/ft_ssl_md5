/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:51:42 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/16 15:03:35 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define RFC_READ 64

# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[93m"
# define MAGENTA "\x1b[35m"
# define EOC "\x1b[0m"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>

int			ft_atoi(const char *str);
int			ft_atoip(char **str);
char			*ft_itoa(int n);
char			*ft_itoabase(int n, unsigned int b);
char			*ft_utoabase(unsigned int n, unsigned int b);
unsigned int		ft_abs(int nb);

unsigned char		ft_freeret(void *ptr, unsigned char ret);
void			*ft_freeswap(void **ptr, void *swap);
void			*ft_memalloc(unsigned int size);
void			*ft_memcpy(void *dest, const void *src, unsigned int byte_nb);
void			*ft_m(unsigned int byte_nb);
void			ft_ptrswap(void **p1, void **p2);
void			ft_free(void *ptr);
void			*ft_memset(void *mem, unsigned int size, char c);
void			*ft_bzero(void *mem, unsigned int size);
int			ft_memcmp(void *mem, void *mem2, unsigned int size);

char			*ft_gnl(int fd);
char			*ft_rfc(char *file);
char			**ft_gdc(char *path);
char			*ft_rfd(int fd);

unsigned char		ft_isdir(char *path);

void			ft_putchar(char c);
void			ft_putnchar(char c, unsigned int nb);
void			ft_putnbr(int nb);
void			ft_puts(const char *str);

char			*ft_strcat(char *s1, char *s2);
char			*ft_strchr(char *str, char c);
char			*ft_strrchr(char *str, char c);
char			*ft_strstr(char *str, char *needle);
char			*ft_strrstr(char *str, char *needle);
char			ft_strcmp(const char *s1, const char *s2);
char			ft_strncmp(const char *s1, const char *s2, unsigned int n);
unsigned int		ft_stricmp(const char *s1, const char *s2);
void			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *str);
char			*ft_strndup(const char *str, int size);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strnjoin(int n, ...);
char			*ft_strcjoin(const char *s1, const char *s2, char c);
char			*ft_strsjoin(const char *s1, const char *s2, const char *in);
unsigned int		ft_strlen(const char *str);
char			*ft_strfrmchr(char c, unsigned int n);
char			**ft_strsplit(char *s, char c);
unsigned int		ft_strcount(const char *s, char c);
void			ft_strswap(char **s, char *n);

char			*ft_strnew(void);
void			ft_strpush(char **str, char c);
void			ft_strspush(char **str, char *push);
void			ft_strins(char **str, char c, unsigned int i);
void			ft_strsins(char **str, char *ins, unsigned int i);
void			ft_strrem(char *str);

char			**ft_strarrdup(char **array);
int			ft_strarrstr(char **array, char *str);
int			ft_strarrstrn(char **array, char *str, unsigned int n);
char			*ft_strarrstrstrr(char **array, char *str);
void			ft_strarrrem(char **array);
unsigned int		ft_strarrstrlen(char **array);

void			**ft_parrnew(void);
void			**ft_parrinit(int n, ...);
void			ft_parrfree(void **tab);
void			ft_parrelmfree(void **tab);
void			ft_parrpush(void ***tab, void *elem);
void			ft_parrbeg(void ***tab, void *elem);
void			ft_parrrem(void **tab);
void			ft_parrprem(void **tab, void *elem);
unsigned int		ft_parrlen(void **array);
void			**ft_parrdup(void **array);
void			**ft_parrndup(void **array, unsigned int n);
void			**ft_parrjoin(void **a1, void **a2);
int			ft_parrfind(void **tab, void *elem);

int			ft_intlen(int nb);

void			ft_print(int fd, char *s, ...);
char			*ft_noprint(char *s, ...);

int			ft_printf(const char *s, ...);
int			ft_format(char *s, long long *f, va_list ap, int *c);
char			*ft_cast_int(char s, va_list ap, long long *f);
char			*ft_cast_uns(char s, va_list ap, long long *f);
char			*ft_cast_str(char s, va_list ap);
int			ft_cast_wch(char s, va_list ap, long long *f, int *c);
char			*ft_con_int(long long i, long long *f);
char			*ft_con_uns(char s, unsigned long long i, long long *f);
int			ft_con_ptr(va_list ap, long long f, int *c);
char			*ft_itoabase_uns(unsigned long long n, int b, long long *f, char c);
int			ft_color(char *s, int i, int *c);
int			ft_charwlen(wchar_t c);
int			ft_strwlen(wchar_t *s);
void			ft_putwchar(wchar_t c);
void			ft_putwstr(wchar_t *s);

#endif
