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

/* This file is present for testing and demonstration purposes only.
 * To run the code present in this file, run `make main`
 */
#include "matrix.h"

int	main(void)
{
	t_matrix	*a;
	t_matrix	*b;
	t_matrix	*mult;
	t_matrix	*mult2;

	double		values[3];
	double		values2[3];

	values[0] = 5.4;
	values[1] = 6.3;
	values[2] = 7.4;
	values2[0] = 1.2;
	values2[1] = -2;
	values2[2] = 3.0;
	a = create_matrix(3, 1, values);
	b = create_matrix(1, 3, values2);
	print_matrix(*a);
	print_matrix(*b);
	mult = mx_mult(*a, *b);
	mult2 = mx_mult(*b, *a);
	print_matrix(*mult);
	print_matrix(*mult2);
	destroy_matrix(a);
	destroy_matrix(b);
	destroy_matrix(mult);
	return (0);
}
