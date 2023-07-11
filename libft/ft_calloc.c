/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:33:16 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/15 12:30:43 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*v;
	size_t	i;

	i = 0;
	v = (char *) malloc(count * size);
	if (!v)
		return (0);
	ft_bzero(v, count * size);
	return (v);
}

// int main ()
// {
//     char *s;

//     s = ft_calloc(3, 4);
// }
