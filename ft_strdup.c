#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = 0;
	while (len-- > 0)
		s[len] = s1[len];
	return (s);
}
