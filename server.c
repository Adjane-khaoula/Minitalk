/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:58:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/20 00:11:42 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_msg_help(char **msg)
{
	static int	j;
	static int	pid_client;

	if (pid_client == 0)
	{
		pid_client = ft_atoi(*msg);
		free (*msg);
		*msg = NULL;
		j++;
	}
	else if(pid_client != 0)
	{
		j = 0;
		ft_putstr(*msg);
		// usleep(70);
		kill(pid_client,SIGUSR1);
		free(*msg);
		pid_client = 0;
		*msg = NULL;
	}
}

void	print_msg(int signo)
{
	static int	i=-1;
	static char	res;
	static char *msg;
	
	i++;	
	if (signo == SIGUSR2)
		res |= 1 << i;
	if (i == 7)
	{
		ft_strcat(&msg,res);
		if (!res)
			print_msg_help(&msg);
		i = -1;
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
		usleep(70);
	while(1);
	return (0);
}
