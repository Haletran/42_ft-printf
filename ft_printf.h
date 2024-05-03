/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:11:45 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/27 11:11:49 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_special(unsigned int n, unsigned int fd);
int	ft_putnbr_base(unsigned int nb, char *base);
int	ft_putnbr_base_ptr(unsigned long long nb, char *base);
int	v_pointer(unsigned long long ptr, char *base);
int	check_del(char format);
int	check_identifier(int len, char format, va_list args);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);

#endif
