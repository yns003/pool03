/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:10:37 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/23 17:45:34 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
		int i;
		int j;

		i=0;
		j=0;

		while(dest[i]!= '\0')
		{
			i++;
		}
		while(src[j]!= '\0')
		{
			dest[i]= src[j];		
				j++;
				i++;
			
		}
			dest[i]= '\0';
		return (dest);
}
/*
int main ()
{
	char src[]=" youness";
	char dest[]=" messi";
	printf("%s", ft_strcat(dest , src));

}*/
