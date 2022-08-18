/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:59:16 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/18 23:57:00 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"client.h"

void	client(pid_t pid,_Bool bit)
{
	if(bit == 0)
		kill(pid,SIGUSR1);
	else
		kill(pid,SIGUSR2);
	
}

void	convert_binary(int pid,char c)
{
	int		i;
	_Bool	bit;

	i = -1;
	bit = 0;
	while (++i < 8)
	{
		bit = (c >> i) & 1;
		client(pid,bit);
		usleep(70);
	}
}
void	msg(char *pid,char *av)
{
	int	i;

	i = -1;
	while(av[++i])
		convert_binary(ft_atoi(pid),av[i]);
	convert_binary(ft_atoi(pid),0);
}

void	msg_confirm(int signo)
{
	ft_putstr("message well received");
}

int main(int ac,char **av)
{
	pid_t	pid;
	char 	*id_str;

	signal(SIGUSR1,msg_confirm);
	pid = getpid();
	id_str = ft_itoa(pid);
	msg(av[1], id_str);
	if(ac == 3)
		msg(av[1],av[2]);
	else
		ft_putstr("Error\n");
	return (0);
}
