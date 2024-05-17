/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiaxu <xiaxu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:53:38 by xiaxu             #+#    #+#             */
/*   Updated: 2024/05/17 16:56:01 by xiaxu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		sub = ft_calloc(1, 1);
		if (!sub)
			return (NULL);
	}
	else 
	{
		sub = malloc(len + 1);
		if (!sub)
			return (NULL);
		i = 0;
		while (s[i + start] && i < len)
		{
			sub[i] = s[i + start];
			i++;
		}
		sub[i] = 0;
	}
	return (sub);
}
