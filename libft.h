/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 21:47:24 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/05 17:32:26 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>


/*TODO Change the variable names of the prototype. Run norminette for libft
**Do the man for EACH FUNCTION (to make sure the name of the variables)
**
**
*///REMOVE THIS SHIT
# include <stdio.h>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*Memory Manipulation*/
void	*ft_memset(void *ptr, int value, size_t num); //*
void	*ft_memcpy(void *str1, const void *str2, size_t num); //*
void	*ft_memmove(void *dst, const void *src, size_t n); //*
void	*ft_memchr(const void *str, int c, size_t n); //*
void	*ft_memccpy(void *dst, const void *src, int c, size_t n); //*
int		ft_memcmp(const void *str1, const void *str2, size_t n); //*
void	ft_bzero(void *s, size_t n); //*

/*String manipulation*/
char	*ft_strcpy(char *dest, const char *src); //*
char	*ft_strchr(const char *s, int c); //*
char	*ft_strdup(const char *str); //*
size_t	ft_strlen(const char *str); //*
char	*ft_strncpy(char *dest, const char *src, size_t num); //*
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n); //*
char	ft_strlcat(char *dst, const char *src, size_t s); //*
char	*ft_strstr(const char *big, const char *little); //*
char	*ft_strnstr(const char *big, const char *little, size_t len);
int 	ft_strcmp(const char *s1, const char *s2); //*

/*Misc.*/
int		ft_atoi(char *str); //*

int		ft_isalnum(int c); //*
int		ft_isalpha(int c); //*
int		ft_isascii(int c); //*
int		ft_isdigit(int c); //*
int		ft_isprint(int c); //*
int		ft_toupper(int c); //*
int		ft_tolower(int c); //*

#endif
