/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:19:52 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/16 19:29:15 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
#define CLIENT_H

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>



void	ft_putstr(char *str);
char	*ft_itoa(int n);
void	server();
int	ft_atoi(const char	*str);
char	*ft_strdup(char *src);
char	*ft_itoa(int n);
void	ft_strcat(char **msg,char src);
int	ft_strlen(const char *str);
#endif 