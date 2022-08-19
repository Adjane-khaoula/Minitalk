/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:59:28 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/19 23:14:16 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include <unistd.h>
#include <stdlib.h>
#include<signal.h>


void	ft_putstr(char *str);
char	*ft_itoa(int n);
void	client(pid_t pid,_Bool bit);
int	ft_atoi(const char	*str);
char	*ft_strdup(char *src);
void	ft_strcat(char **msg,char src);
int		ft_strlen(const char *str);
void	msg(char *pid,char *av);
void	msg_confirm(int signo);
#endif 
