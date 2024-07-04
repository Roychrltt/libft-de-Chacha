/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:24:29 by xiaxu             #+#    #+#             */
/*   Updated: 2024/07/04 15:49:21 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_c(int c)
{
	write (1, &c, 1);
	return (1);
}

int	print_s(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (print_s("(null)"));
	while (s[i])
		write (1, &s[i++], 1);
	return (i);
}

static int	ft_format(const char c, va_list args)
{
	int	print_len;

	print_len = 0;
	if (c == 'c')
		print_len += print_c(va_arg(args, int));
	else if (c == 's')
		print_len += print_s(va_arg(args, char *));
	else if (c == 'p')
		print_len += print_p(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		print_len += print_di(va_arg(args, int));
	else if (c == 'u')
		print_len += print_u(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		print_len += print_x(va_arg(args, unsigned int), c);
	else
		print_len += print_c(c);
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_len;
	va_list	args;
	char	c;

	if (!str)
		return (-1);
	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%' && (c == 'c' || c == 's' || c == 'd' || c == 'i'
				|| c == 'u' || c == 'p' || c == 'x' || c == 'X' || c == '%'))
		{
			print_len += ft_format(c, args);
			i++;
		}
		else
			print_len += print_c(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
/*
int main()
{
	int	i;
	int	j;

	void *p=NULL;
	void *pp=NULL;
	printf("%lld\n", (unsigned long long)p);
	i = ft_printf(" %p %p \n", p, pp);
	printf("%d\n", i);
	printf("my printf worked\n");
	j = printf(" %p %p \n", p, pp);
	printf("%d\n", j);

	int i = printf(0);
	int j = ft_printf(0);
	printf("%d\n", i);
	printf("%d\n", j);
}*/
