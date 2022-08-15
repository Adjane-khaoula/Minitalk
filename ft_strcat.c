/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:07:37 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/15 13:50:24 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"client.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(const char *dest,const char *src)
{
	int		i;
	char	*string;

	i = -1 ;
	string = malloc(ft_strlen(dest)+ft_strlen(src)+ 1);
	while (*dest)
		string[++i] = *dest++;
	while (*src)
		string[++i] = *src++;
	string[++i] = '\0';
	return (string);
}
