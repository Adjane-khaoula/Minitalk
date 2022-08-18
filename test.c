/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:56:19 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/18 16:08:56 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>


// void handler1(int signo)
// {
//   printf("num_SIGURS1 =%d\n", signo);
// }
// void handler2(int signo)
// {
//   printf("num_SIGURS2 =%d\n", signo);
// }

// void handler3(int signo)
// {
//   printf("num_SIGINT =%d\n", signo);
// }


// int main()
// {
//   pid_t pid;
  
//   pid = getpid();
  
//   printf("pid = %d\n",pid);
//   signal(SIGUSR1,handler1);
//   signal(SIGUSR2,handler2);
//   signal(SIGINT,handler3);
  

//   kill(pid,SIGUSR1);
//   kill(pid,SIGUSR2);
//   kill(pid,SIGINT);
//   return 0;
// }
int	binary_nbr (int c)
{
	int		i;
	int		j;
	char	*binary_convert;
	char	*binary;
	
	j = 0;
	i = c / 2;
	binary_convert  = ft_itoa(c % 2);
	c = i;
	while(c >= 2)
	{
		i = c / 2;
		binary_convert = ft_strcat(binary_convert  ,ft_itoa(c % 2));
		c = i;
	}
	binary_convert = ft_strcat(binary_convert  ,ft_itoa(c % 2));
	binary = malloc(ft_strlen(binary_convert) + 1);
		printf("%p\n",binary);

	while (ft_strlen(binary_convert) > 0)
	{
		binary[j] = *(binary_convert + (ft_strlen(binary_convert)));
		j++;
	}
	binary[j] = '\0';
	printf("%s\n",binary);
	return (ft_atoi(binary));
}


	// while(id_str[++i])
	// 	convert_binary(ft_atoi(av[1]),id_str[i]);
		
	// convert_binary(ft_atoi(av[1]),id_str[i]);
	// convert_binary(ft_atoi(av[1]),id_str[i]);
	// convert_binary(ft_atoi(av[1]),0);
	
	// if(ac == 3)
	// {
	// 	i = -1;
	// 	while(av[2][++i])
	// 		convert_binary(ft_atoi(av[1]),av[2][i]);
	// 	convert_binary(ft_atoi(av[1]),0);
	// }
	// else
	// 	ft_putstr("Error\n");