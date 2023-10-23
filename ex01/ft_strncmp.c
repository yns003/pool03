/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:45:16 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/23 12:09:36 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strncmp( char *s1,  char *s2, unsigned int  n)
{

    unsigned int i;
    i=0;
		if(n == 0)
			return (0) ;
    while (s1[i] == s2[i] && s1[i] !='\0' && s2[i] != '\0' && i < n )
		i++;
		if(i == n)
		i--;
	return (s1[i] - s2[i]) ;
}
/*
int main()
{
  printf("%d", ft_strncmp("messi","messi",5));
}*/
