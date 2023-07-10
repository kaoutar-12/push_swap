/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:46:48 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:46:48 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(){
// 	int fd = creat("text", O_RDWR | O_RDONLY | O_CREAT);
// 	// write(fd, "jkk", 5);
// 	ft_putendl_fd("lol",fd);
// 	close (fd);
// 	return (0);
// }