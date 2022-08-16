/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:59:16 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/16 20:21:22 by kadjane          ###   ########.fr       */
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
		usleep(500);
	}
	
}

int main(int ac,char **av)
{
	int	i;
	
	i = -1;
	// printf("%d\n",(av[2][2]));
	// write(1,av[2], 5);
	while(av[2][++i])
		convert_binary(ft_atoi(av[1]),av[2][i]);
	convert_binary(ft_atoi(av[1]),0);

}