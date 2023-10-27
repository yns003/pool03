/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:04:10 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/24 19:06:08 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)

{
	int	n;
	int	j;
	int	i;

	n = 0;
	while (to_find[n] != '\0')
		n++;
	if (n == 0)
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			i++;
			if (i == n)
				return (&str[j]);
		}
		j++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "";
	char	tofind[] = "";

	printf("%s", ft_strstr(str, tofind));
}*/
