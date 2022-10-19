/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hukalo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:50:16 by hukalo          #+#    #+#             */
/*   Updated: 2021/09/16 17:30:14 by hukalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int main (void){
    int a=1;
    int b=3;
    ft_swap(&a,&b);
    ft_putchar(a+48);
    ft_putchar(' ');
    ft_putchar(b+48);
     
}*/
