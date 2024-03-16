/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calcifer <calcifer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:21:43 by calcifer          #+#    #+#             */
/*   Updated: 2024/03/16 23:00:09 by calcifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '0';
	z = '0';
	while (x <= '7')
	{
		if ((x < y) && (y < z))
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
			if (x < '7')
				write(1, ", ", 2);
		}
		z++;
		if (z > '9')
		{
			z = '0';
			y++;
			if (y > '9')
			{
				y = '0';
				x++;
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
