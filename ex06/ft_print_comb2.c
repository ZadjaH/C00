/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calcifer <calcifer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:44:24 by calcifer          #+#    #+#             */
/*   Updated: 2024/03/17 17:46:17 by calcifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n)
{
	char	digit;

	digit = (n / 10) + '0';
	write(1, &digit, 1);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 99)
	{
		if (n2 > n1)
		{
			ft_print_number(n1);
			write(1, " ", 1);
			ft_print_number(n2);
			if (n1 < 98)
				write(1, ", ", 2);
		}
		n2++;
		if (n2 > 99)
		{
			n1++;
			n2 = n1 + 1;
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	ft_print_number(999);
	write(1, "\n", 1);
	return (0);
}
*/
