#include "libft.h"

static int	nbr_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = nbr_len(n);
	nl = n;
	if (n < 0)
		nl = -nl;
	result = malloc(len);
	if (!result)
		return (NULL);
	result[len - 1] = 0;
	if (nl == 0)
		result[0] = '0';
	else
	{
		while (nl)
		{
			result[--len - 1] = nl % 10 + '0';
			nl /= 10;
		}
		if (n < 0)
			result[0] = '-';
	}
	return (result);
}
