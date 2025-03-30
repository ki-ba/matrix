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
	t_matrix	a;
	t_matrix	b;
	t_matrix	c;
	t_matrix	d;
	t_matrix	mult;
	t_matrix	mult2;
	int		values[3] = {5,6,7};
	int		values2[3] = {1,2,3};
	int		values3[4] = {1,2,3,4};
	int		values4[9] = {1,2,3,4,5,6,7,8,9};

	create_matrix(&a, 3, 1, values);
	create_matrix(&b, 1, 3, values2);
	create_matrix(&c, 2, 2, values3);
	create_matrix(&d, 9, 1, values4);
	(void)mult;
	print_matrix(a);
	print_matrix(b);
	/*print_matrix(c);*/
	/*print_matrix(d);*/
	mx_mult(&mult, a, b);
	mx_mult(&mult2, b, a);
	print_matrix(mult);
	print_matrix(mult2);
	return (0);
}
