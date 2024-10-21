/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:13 by xiaxu             #+#    #+#             */
/*   Updated: 2024/07/03 09:03:32 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		get_num_len(uintptr_t num, uintptr_t base);
void	put_num(uintptr_t num, char format, uintptr_t base);
int		print_c(int c);
int		print_di(int nb);
int		print_p(unsigned long long ptr);
int		print_s(const char *s);
int		print_u(unsigned int nb);
int		print_x(unsigned int nb, char format);

#endif
