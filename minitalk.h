/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:59:28 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 11:20:28 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>


	char *msg;


void	ft_putstr(char *str);
char	*ft_itoa(int n);
void	client(pid_t pid);
void	server();
int	ft_atoi(const char	*str);
char	*ft_strdup(char *src);

#endif 