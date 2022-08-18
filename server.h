/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:21:00 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/18 17:08:58 by kadjane          ###   ########.fr       */
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
char	*ft_strcat(char **dest,char src);
int	ft_strlen(const char *str);

#endif 