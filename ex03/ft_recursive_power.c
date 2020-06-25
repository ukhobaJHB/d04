/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:06:32 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/25 16:13:46 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_recursive_power(int nb, int power)
{
	if(power < 0){
		return 0;
	}

	if(power > 1)
	{
		nb *= ft_recursive_power(nb, (power - 1));
	}

	return nb;
}
