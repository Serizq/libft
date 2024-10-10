#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	size_t	len;

	len = ft_strlen(s);
	a = (char *)malloc((len + 1) * sizeof(char));
	if (!a)
		return (NULL);

	a = ft_memcpy(a, s, len);
	a[len] = '\0';

		return (a);
}
