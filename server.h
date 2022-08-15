/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:21:00 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 11:21:16 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
#define SERVER_H

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>

void	ft_putstr(char *str);
char	*ft_itoa(int n);
void	client(pid_t pid);
void	server();
int	ft_atoi(const char	*str);
char	*ft_strdup(char *src);

#endif 