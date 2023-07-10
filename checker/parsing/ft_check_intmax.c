/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_intmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:16:34 by kmouradi          #+#    #+#             */
<<<<<<< HEAD:parsing/ft_check_intmax.c
/*   Updated: 2023/07/10 14:30:13 by kmouradi         ###   ########.fr       */
=======
/*   Updated: 2023/07/10 20:04:01 by kmouradi         ###   ########.fr       */
>>>>>>> Ongoing:checker/parsing/ft_check_intmax.c
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_intmax(char *arr)
{
	int	i;
	int	max;

	i = 0;
	max = INT_MAX;
	while (arr[i])
	{
		if (ft_atoi(&arr[i]) > max)
			return (0);
		i++;
	}
	return (1);
}
