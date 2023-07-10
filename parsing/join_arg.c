/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:36 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 14:29:59 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*join_arg(int ac, char **av)
{
	char	*new_av;
	int		i;

	i = 1;
	new_av = ft_strdup("");
	while (i < ac)
	{
		new_av = ft_strjoin(new_av, av[i]);
		if (i != ac -1)
			new_av = ft_strjoin(new_av, " ");
		i++;
	}
	return (new_av);
}
