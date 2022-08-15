/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:59:16 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 18:41:51 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"client.h"

void	client(pid_t pid,int bit)
{
	if(bit == 0)
		kill(pid,SIGUSR1);
	else
		kill(pid,SIGUSR2);
	
}

void	convert_binary(int pid,char c)
{
	int	i;
	int	bit;

	i = -1;
	bit = 0;
	while (++i < 8)
	{
		bit = (c >> i) & 1;
		printf("%d\n", bit);
		client(pid,bit);
		sleep(1);
	}
	
}

int main(int ac,char **av)
{
	int	i;
	
	i = 0;
	while(av[2][++i])
	{
		convert_binary(ft_atoi(av[1]),av[2][i]);
	}
}