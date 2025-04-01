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

/* matrix.c */
void		create_id_matrix(t_matrix *mx, size_t n);
void		create_null_matrix(t_matrix *mx, size_t i, size_t j);
void		print_matrix(t_matrix m);
void		create_matrix(t_matrix *mx, size_t i, size_t j, double *values);
void		destroy_matrix(t_matrix *mx);

/* mx_math.c */
void		mx_mult(t_matrix *p, t_matrix a, t_matrix b);
