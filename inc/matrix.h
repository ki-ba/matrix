/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:20:13 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/29 18:30:31 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_matrix
{
	size_t	i;
	size_t	j;
	double	**m;
}			t_matrix;

/* @brief creates an identity matrix of size n. */
void		create_id_matrix(t_matrix *mx, size_t n);
/* @brief	creates a null matrix of i rows and j cols. */
void		create_null_matrix(t_matrix *mx, size_t i, size_t j);
/* @brief	prints specified matrix in stdout. */
void		print_matrix(t_matrix m);
/* @brief	allocates and intitializes a matrix of i rows x j cols with
*		the specified values. */
void		create_matrix(t_matrix *mx, size_t i, size_t j, int *values);
/* @brief	allocates and populates the matrix p as product of a and b.*/
void		mx_mult(t_matrix *p, t_matrix a, t_matrix b);
/* @brief	frees the memory. */
void		destroy_matrix(t_matrix *mx);
