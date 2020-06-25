/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukhoba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:01:10 by ukhoba            #+#    #+#             */
/*   Updated: 2020/06/25 14:12:56 by ukhoba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_recursive_factorial(int nb)
{
	if	(nb < 0 || nb > 12)
	{
		return 0;
	}
	
	if(nb > 1)
	{
		nb = nb * ft_recursive_factorial((nb - 1));
		return nb;
	}

	return nb;
}
