/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:25:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/29 18:43:34 by kbarru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/* @brief	calculates and return the scalar product between 2 matrixes. */
static double	calculate_product(t_matrix a, t_matrix b, size_t i, size_t j)
{
	double	sum;
	size_t	k;

	k = 0;
	sum = 0;
	while (k < a.j && k < b.i)
	{
		sum += a.m[i][k] * b.m[k][j];
		++k;
	}
	return (sum);
}

/* @brief	allocates and populates the matrix p as product of a and b.*/
t_matrix	*mx_mult(t_matrix a, t_matrix b)
{
	size_t		i;
	size_t		j;
	t_matrix	*p;

	i = 0;
	if (a.j != b.i)
		ft_putstr_fd("Error : matrices aren't multipliable\n", 2);
	else
	{
		p = create_null_matrix(a.i, b.j);
		if (!p)
			return (NULL);
		while (i < p->i)
		{
			j = 0;
			while (j < p->j)
			{
				p->m[i][j] = calculate_product(a, b, i, j);
				++j;
			}
			++i;
		}
		return (p);
	}
	return (NULL);
}
