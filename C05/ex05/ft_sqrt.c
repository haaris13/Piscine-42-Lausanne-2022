/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hukalo <hukalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:40:50 by hukalo          #+#    #+#             */
/*   Updated: 2021/09/23 18:41:53 by hukalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	r;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	r = 0;
	while ((r * r) < (unsigned int)nb)
	{
		r++;
	}
	if ((r * r) == (unsigned int)nb)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
