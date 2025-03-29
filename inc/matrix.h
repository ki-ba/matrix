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
/* @brief	creates a null matrix of size n. */
t_matrix	create_null_matrix(size_t n);
void		print_matrix(t_matrix m);
