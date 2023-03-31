#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	long	n;
	long	i;
	int		s;
	long	x;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		x = n;
		n = n * 10 + (str[i++] - 48);
		if (n / 10 != x && s == 1)
			return (-1);
		else if (n / 10 != x && s == -1)
			return (0);
	}
	return (n * s);
}

static void	*ft_free(char **str, int i)
{
	while (i--)
		free(str[i]);
	free(str);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			k++;
			j = 0;
		}
	}
	return (k);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_fill(char **str, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = malloc(sizeof(char) * (word_len(s + i, c) + 1));
			if (!str[j])
				return (ft_free(str, j));
			while (s[i] != c && s[i])
				str[j][k++] = s[i++];
			str[j++][k] = '\0';
			k = 0;
		}
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	str = ft_fill(str, s, c);
	return (str);
}

int main(int ac, char **av)
{
	int len;
	int i;
	int *stack_a;
	char *str = av[1];
	char **split = ft_split(str, ' ');

	while (*split != NULL)
	{
		len++;
		split++;
	}
	stack_a [i++] = ft_atoi(split);
}