/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:19 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 11:51:35 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	printf("Error\n");
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

	if (ac >= 2)
	{
		str = join_arg(ac, av);
		split = ft_split(str, ' ');
		free(str);
		len_a = 0;
		while (split[len_a] != NULL)
		{
			if (!check_if_only_dig(split[len_a]))
			{
				printf("Error1\n");
				exit(1);
			}
			len_a++;
		}
		arr = malloc(sizeof(int) * len_a);
		if (arr == NULL)
			return (0);
		i = 0;
		while (split[i] != NULL)
		{
			arr[i] = ft_atoi(split[i]);
			i++;
		}
		if (!ft_check_sort_array(arr, len_a))
		{
			printf("Error2\n");
			exit(1);
		}
		if (!ft_check_double(arr, len_a))
		{
			printf("Error3\n");
			exit(1);
		}
	}
	else
	{
		printf("Error4\n");
		exit(1);
	}
	*len_arr = arr_len(split);
		i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free (split);
	return (arr);
}