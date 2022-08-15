/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:58:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 21:32:31 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	print_msg(int signo)
{
	static int	i;
	static char	res;
	
	i = -1;
	while (++i <= 8)
	{
		if (signo == SIGUSR2 && i < 8)
		res |= 1 << i;
		if (i == 8)
		{
			write(1,&res,1);
			i = 0;
			break ;
		}
	
	}
	
}

void	server()
{
	pid_t	pid;

	pid = getpid();
	ft_putstr(ft_itoa(pid));

	signal(SIGUSR1,print_msg);
	signal(SIGUSR2,print_msg);
	
	while(1);
}

int main()
{	
	server();
}