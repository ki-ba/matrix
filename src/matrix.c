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
void	create_id_matrix(t_matrix *mx, size_t n)
{
	size_t		i;
	size_t		j;

	mx->i = n;
	mx->j = n;
	mx->m = ft_calloc(mx->i, sizeof(double *));
	i = 0;
	while (i < mx->i)
	{
		mx->m[i] = ft_calloc(mx->j, sizeof(double));
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
}

/* @brief	creates a null matrix of i rows and j cols. */
void	create_null_matrix(t_matrix *mx, size_t i, size_t j)
{
	mx->i = i;
	mx->j = j;
	mx->m = ft_calloc(mx->i, sizeof(double *));
	i = 0;
	while (i < mx->i)
	{
		mx->m[i] = ft_calloc(mx->j, sizeof(double));
		j = 0;
		while (j < mx->j)
		{
			mx->m[i][j] = (double)0;
			++j;
		}
		++i;
	}
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
void	create_matrix(t_matrix *mx, size_t i, size_t j, double *values)
{
	size_t	k;
	size_t	l;

	create_null_matrix(mx, i, j);
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
}

/* @brief	frees the memory. */
void	destroy_matrix(t_matrix *mx)
{
	size_t	i;

	i = -1;
	while (++i < mx->i)
		free(mx->m[i]);
	free(mx->m);
}
