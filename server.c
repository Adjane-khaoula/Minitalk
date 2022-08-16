/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:58:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/16 20:20:31 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	print_msg(int signo)
{
	static int	i=-1;
	static char	res=0;
	char		bit;
	static char *msg = NULL;
	
	i++;	
	if (signo == SIGUSR2)
		res |= 1 << i;
	if (i == 7)
	{
		ft_strcat(&msg,res);
		i = -1;
		if (!res)
		{
			printf("%c", res);
			ft_putstr(msg);
			free(msg);
			msg = NULL;
		}
		res = 0;
	}
}

int main()
{	
	pid_t	pid;

	pid = getpid();
	ft_putstr(ft_itoa(pid));

	signal(SIGUSR1,print_msg);
	signal(SIGUSR2,print_msg);
		usleep(500);
	while(1);
}