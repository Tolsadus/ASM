/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 14:14:22 by mroux             #+#    #+#             */
/*   Updated: 2015/02/19 16:12:25 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <stddef.h>
# include <stdio.h>
# include <strings.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_puts(char *str);

void	ft_bzero(void *s, size_t n);
void	ft_memset(void *b, int c, size_t len);
void	ft_memcpy(void *dst, void *src, size_t n);

size_t	ft_strlen(char *str);

int		ft_cat(int fd);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strdup(const char *s1, size_t n);

/*
 * BONUS
*/

int		ft_isspace(int c);
int		ft_ishastag(int c);

void	ft_putstr(char *str);


#endif
