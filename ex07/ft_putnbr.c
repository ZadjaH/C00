/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calcifer <calcifer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:15:13 by calcifer          #+#    #+#             */
/*   Updated: 2024/03/17 17:43:22 by calcifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			digit;
	unsigned int	nbr;

	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = -nb;
	}
	else if (nb >= 0)
	{
		nbr = nb;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	digit = (nbr % 10) + '0';
	write(1, &digit, 1);
}

/*
int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}
*/
