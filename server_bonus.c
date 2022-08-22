/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:54:05 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/22 22:36:13 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_msg_help(char **msg)
{
	static int	pid_client;

	if (pid_client == 0)
	{
		pid_client = ft_atoi(*msg);
		free (*msg);
		*msg = NULL;
	}
	else
	{
		ft_putstr(*msg);
		kill(pid_client, SIGUSR1);
		free(*msg);
		*msg = NULL;
		pid_client = 0;
	}
}

void	print_msg(int signo)
{
	static int	i = -1;
	static char	res;
	static char	*msg;

	i++;
	if (signo == SIGUSR2)
		res |= 1 << i;
	if (i == 7)
	{
		ft_strcat(&msg, res);
		if (!res)
			print_msg_help(&msg);
		i = -1;
		res = 0;
	}
}

int	main(void)
{
	pid_t	pid;
	char	*pid_str;

	signal(SIGUSR1, print_msg);
	signal(SIGUSR2, print_msg);
	pid = getpid();
	pid_str = ft_itoa(pid);
	ft_putstr(pid_str);
	free (pid_str);
	while (1)
		pause();
	return (0);
}
