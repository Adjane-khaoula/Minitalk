/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:58:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/18 18:42:44 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	print_msg_help(char *msg)
{
	static int	pid_client;

	if (pid_client == 0)
	{
		pid_client = ft_atoi(msg);
		free (msg);
		msg = NULL;
	}
	else
	{
		ft_putstr(msg);
		kill(pid_client,SIGUSR1);
		free(msg);
		msg = NULL;
		pid_client = 0;
	}
}

void	print_msg(int signo)
{
	static int	i=-1;
	static char	res;
	char		bit;
	static char *msg;
	
	i++;	
	if (signo == SIGUSR2)
		res |= 1 << i;
	if (i == 7)
	{
		ft_strcat(&msg,res);
		i = -1;
		res = 0;
		if (!res)
			print_msg_help(msg);
	}
}

int main()
{	
	pid_t	pid;

	pid = getpid();
	ft_putstr(ft_itoa(pid));
	signal(SIGUSR1,print_msg);
	signal(SIGUSR2,print_msg);
		usleep(70);
	while(1);
	return (0);
}
