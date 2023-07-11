/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:36 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 17:17:40 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_espace(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

char	*join_arg(int ac, char **av)
{
	char	*new_av;
	int		i;

	i = 1;
	new_av = ft_strdup("");
	while (i < ac)
	{
		if (check_espace(av[i]) == 0)
		{
			free (new_av);
			write(2, "Error\n", 6);
			exit (0);
		}
		new_av = ft_strjoin(new_av, av[i]);
		if (i != ac -1)
			new_av = ft_strjoin(new_av, " ");
		i++;
	}
	return (new_av);
}
