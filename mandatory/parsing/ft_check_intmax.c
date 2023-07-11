/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_intmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:16:34 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 14:29:09 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_intmax(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if ((ft_atoi(arr) > INT_MAX || ft_atoi(arr) < INT_MIN)
			&& ft_strlen(arr) >= 10)
			return (0);
		i++;
	}
	return (1);
}
