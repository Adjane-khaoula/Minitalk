/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:58:59 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/22 19:10:29 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_msg_help(char **msg)
{
	ft_putstr(*msg);
	free(*msg);
	*msg = NULL;
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
