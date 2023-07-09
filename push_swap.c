/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:19 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 21:38:55 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int		j;
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
		j = 0;
	while (split[j])
	{
		free(split[j]);
		j++;
	}
	free (split);
	return (arr);
}

int	main(int ac, char **av)
{
	int		len_arr;
	int		*arr;
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	arr = parsing(ac, av, &len_arr);
	stack_a = creatstack(len_arr);
	stack_b = creatstack(len_arr);
	i = len_arr - 1;
	while (i >= 0)
	{
		fill_stack(stack_a, arr[i]);
		i--;
	}
	sort_100(stack_a, stack_b);
}
