int		ft_iterative_factorial(int nb)
{	
	int 	factorial;
	int		i;

	factorial = nb;
	i = 1;

	if		(nb < 0 || nb > 12)
	{
		return 0;
	}

	while	(i < nb)
	{
		factorial =  factorial * (nb - 1);
		nb--;
	}

	return factorial;
}
