#include "push_swap.h"
char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*v;

	i = 0;
	len = ft_strlen(s1);
	v = (char *)(malloc(sizeof(char) * len + 1));
	if (v == 0)
		return (0);
	while (i < len)
	{
		v[i] = s1[i];
		i++;
	}
	v[i] = '\0';
	return (v);
}