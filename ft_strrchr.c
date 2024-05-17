/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:53:24 by xiaxu             #+#    #+#             */
/*   Updated: 2024/05/17 16:40:44 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			p = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		p = (char *)(s + i);
	return (p);
}
