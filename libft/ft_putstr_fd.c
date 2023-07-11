/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:44:20 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:44:20 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	if (s[i] == 0)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// int main(){
// 	int fd = creat("text", O_RDWR | O_RDONLY | O_CREAT);
// 	// write(fd, "jkk", 5);
// 	ft_putstr_fd("lolhd",fd);
// 	close (fd);
// 	return (0);
// }
