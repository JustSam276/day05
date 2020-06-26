/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kratlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:05:52 by kratlou           #+#    #+#             */
/*   Updated: 2020/06/26 14:58:15 by kratlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int x;
	x = 0;

	while(src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return(dest);
}

int main()
{
	char str_1[20] = "BlueSoul";
	char str_2[20];

	printf("%s\n",ft_strcpy(str_2, str_1));
	printf("%s", str_2);
	return 0;
}


