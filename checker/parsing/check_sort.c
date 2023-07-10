/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:56:46 by kmouradi          #+#    #+#             */
<<<<<<< HEAD:parsing/check_sort.c
/*   Updated: 2023/07/10 14:30:21 by kmouradi         ###   ########.fr       */
=======
/*   Updated: 2023/07/10 20:03:35 by kmouradi         ###   ########.fr       */
>>>>>>> Ongoing:checker/parsing/check_sort.c
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
