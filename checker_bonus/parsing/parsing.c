/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:19 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 14:30:55 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap_index(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free (arr);
}

int	arr_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

int	*parsing(int ac, char **av, int *len_arr)
{
	int		len_a;
	int		i;
	int		*arr;
	char	*str;
	char	**split;

	str = join_arg(ac, av);
	split = ft_split(str, ' ');
	free(str);
	len_a = -1;
	while (split[++len_a] != NULL)
		if (!check_if_only_dig(split[len_a])
			|| !ft_check_intmax(split[len_a]))
			print_error();
	arr = malloc(sizeof(int) * len_a);
	if (arr == NULL)
		return (0);
	i = -1;
	while (split[++i] != NULL)
		arr[i] = ft_atoi(split[i]);
	if (!ft_check_double(arr, len_a))
		print_error();
	*len_arr = arr_len(split);
	return (ft_free(split), arr);
}
