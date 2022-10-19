/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hukalo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:30:53 by hukalo          #+#    #+#             */
/*   Updated: 2021/09/19 16:32:51 by hukalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else if (str[i] == '\0')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int main (void){
    
    
    
    printf("%d", ft_str_is_printable("ddd22"));
    
    
}*/
