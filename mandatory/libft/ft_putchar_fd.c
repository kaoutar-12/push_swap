/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:47:15 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:47:15 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// int main(){
// 	int fd = creat("text", O_RDWR | O_RDONLY | O_CREAT);
// 	// write(fd, "3", 5);
// 	ft_putchar_fd('k', fd);
// 	close (fd);
// 	return (0);
// }