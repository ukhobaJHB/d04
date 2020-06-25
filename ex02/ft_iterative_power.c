/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:20:53 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/25 15:51:20 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int 	num;

	if		(power < 0)
	{
		return 0;
	}

	num = 1;
	while	(power > 0)
	{
		num = num * nb;
		power--;
	}

	return num;
}
