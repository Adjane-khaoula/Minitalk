/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:07:37 by kadjane           #+#    #+#             */
/*   Updated: 2022/08/22 17:07:12 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"

void	ft_strcat(char **msg, char src)
{
	int		i;
	char	*string;
	char	*str;

	i = -1;
	str = *msg;
	string = malloc(ft_strlen(*msg) + 2);
	if (!string)
		return ;
	while (*msg && **msg)
		string[++i] = *((*msg)++);
	string[++i] = src;
	string[++i] = '\0';
	if (str)
	{
		free(str);
		str = NULL;
	}
	*msg = string;
}
