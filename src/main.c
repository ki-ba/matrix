/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:20:18 by kbarru            #+#    #+#             */
/*   Updated: 2025/03/29 18:32:20 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

int	main(void)
{
	t_matrix	m4;
	t_matrix	m10;
	t_matrix	m1;
	t_matrix	m0;

	create_id_matrix(&m4, 4);
	create_id_matrix(&m10, 10);
	create_id_matrix(&m1, 1);
	create_id_matrix(&m0, 0);
	print_matrix(m4);
	print_matrix(m10);
	print_matrix(m1);
	print_matrix(m0);
	return (0);
}
