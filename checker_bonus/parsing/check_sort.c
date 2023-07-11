/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:56:46 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 08:48:25 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_check_sort_array(int *stack_a, int len_a)
{
	int	i;

	i = 0;
	while (i < len_a - 1)
	{
		if (stack_a[i] > stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}
