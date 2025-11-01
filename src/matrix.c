/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:25:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/29 18:43:34 by kbarru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

/* @brief creates an identity matrix of size n. */
t_matrix	*create_id_matrix(size_t n)
{
	size_t		i;
	size_t		j;
	t_matrix	*mx;

	mx = create_null_matrix(n, n);
	if (!mx)
		return (NULL);
	mx->i = n;
	mx->j = n;
	i = 0;
	while (i < mx->i)
	{
		j = 0;
		while (j < mx->j)
		{
			if (i == j)
				mx->m[i][j] = (double)1;
			else
				mx->m[i][j] = (double)0;
			++j;
		}
		++i;
	}
	return (mx);
}

/* @brief	creates a null matrix of i rows and j cols. 
 * @param	i the number of rows.
 * @param	j the number of columns.
*/
t_matrix	*create_null_matrix(size_t i, size_t j)
{
	t_matrix	*mx;

	mx = ft_calloc(1, sizeof(t_matrix));
	if (!mx)
		return (NULL);
	mx->i = i;
	mx->j = j;
	mx->m = ft_calloc(mx->i, sizeof(double *));
	i = 0;
	while (i < mx->i)
	{
		mx->m[i] = ft_calloc(mx->j, sizeof(double));
		if (!(mx->m[i]))
			return (destroy_matrix(mx));
		j = 0;
		while (j < mx->j)
		{
			mx->m[i][j] = (double)0;
			++j;
		}
		++i;
	}
	return (mx);
}

/* @brief	prints specified matrix in stdout. */
void	print_matrix(t_matrix m)
{
	size_t	i;
	size_t	j;

	ft_printf("=== MATRIX %d x %d ===\n\n", m.i, m.j);
	i = 0;
	while (i < m.i)
	{
		j = 0;
		while (j < m.j)
		{
			ft_printf("%d	", (int)(m.m[i][j]));
			if (j == m.j - 1)
				ft_printf("\n");
			++j;
		}
		++i;
	}
	ft_printf("===================\n\n", m.i, m.j);
}

/* @brief	allocates and intitializes a matrix of i rows x j cols with
*		the specified values. */
t_matrix	*create_matrix(size_t i, size_t j, double *values)
{
	size_t		k;
	size_t		l;
	t_matrix	*mx;

	mx = create_null_matrix(i, j);
	if (!mx)
		return (NULL);
	k = 0;
	while (k < i)
	{
		l = 0;
		while (l < j)
		{
			mx->m[k][l] = values[k * j + l];
			++l;
		}
		++k;
	}
	return (mx);
}

/* @brief	frees the memory. */
void	*destroy_matrix(t_matrix *mx)
{
	size_t	i;

	i = -1;
	while (++i < mx->i)
		free(mx->m[i]);
	free(mx->m);
	free(mx);
	return (NULL);
}
