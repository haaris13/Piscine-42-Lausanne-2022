/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hukalo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:10:45 by hukalo          #+#    #+#             */
/*   Updated: 2021/09/14 18:11:53 by hukalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[(size - i) - 1];
		tab[(size - i) - 1] = temp;
		i++;
	}
}
/*int main (void){
    
    int tab[4] ={1,2,3,4};
    
    
    ft_rev_int_tab(&tab[4],8);
       
    //ft_putchar((ft_rev_int_tab(&tab[5],5))+48);
    
}
*/
