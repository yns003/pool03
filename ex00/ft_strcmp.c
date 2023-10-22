/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:13:15 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/22 16:33:50 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main ()
{
		char s1[]="aaa";
		char s2[]="a";
		ft_strcmp(s1 ,s2);
		printf("%d" , strcmp(s1,s2));
}*/
