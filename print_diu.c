/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:56:24 by xiaxu             #+#    #+#             */
/*   Updated: 2024/07/04 15:49:37 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*unsigned_itoa(unsigned int nb)
{
	int		len;
	char	*result;

	len = get_num_len(nb, 10);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = 0;
	if (nb == 0)
		result[0] = '0';
	else
	{
		while (nb)
		{
			result[--len] = nb % 10 + '0';
			nb /= 10;
		}
	}
	return (result);
}

int	print_u(unsigned int nb)
{
	int		print_len;
	char	*s;

	s = unsigned_itoa(nb);
	print_len = print_s(s);
	free(s);
	return (print_len);
}

int	print_di(int nb)
{
	int		print_len;
	char	*s;

	s = ft_itoa(nb);
	print_len = print_s(s);
	free(s);
	return (print_len);
}
