/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:04:33 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:52 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int i;
	unsigned	int j;
		i=0;
		j=0;
		while(dest[i]!= '\0')
		{
			i++;
		}
		while(src[j]!= '\0' && i < nb)
		{
			dest[i]= src[j];
				i++;
				j++;
		}
		while(i < nb)
		{
			dest[i]= '\0';
				i++;
		}
		return (dest);
}

int main ()
{
	int nb = 4;
	char src[]=" youness";
	char dest[]=" messi";
	printf("%s", ft_strncat(dest , src, nb));

}
