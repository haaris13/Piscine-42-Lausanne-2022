/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hukalo <hukalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:25:25 by hukalo          #+#    #+#             */
/*   Updated: 2021/09/23 13:26:10 by hukalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb1;

	i = 1;
	nb1 = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		nb = nb * nb1;
		i++;
	}
	return (nb);
}
/*int main ()
{
	printf("%d", ft_iterative_power(4,4));
}*/