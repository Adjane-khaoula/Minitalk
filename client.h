/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:19:52 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 16:41:23 by kadjane          ###   ########.fr       */
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
char	*ft_strcat(const char *dest,const char *src);
int	ft_strlen(const char *str);
#endif 