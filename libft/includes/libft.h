/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:12:32 by gamoreno          #+#    #+#             */
/*   Updated: 2022/09/23 20:16:42 by gamoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*------------------------------------Librerias-------------------------------*/
# include <stdlib.h>
# include <unistd.h>
# include <math.h>

/*----------------------------------Prototipos--------------------------------*/
size_t		ft_strlen(const char *s);
double		ft_atof(char *s);
long int	ft_atoli(const char *nptr);
int			ft_isdigit(int c);
int			ft_strcmp(const char *ptr1, const char *ptr2);
int			ft_atoi(const char *nptr);
int			ft_abs(int n);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
char		*ft_itoa(int n);
char		*ft_ftoa(double n);
char		*ft_strjoin(char const *s1, char const *s2);
void		ft_putstr_fd(char *s, int fd);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *s, size_t n);
#endif
