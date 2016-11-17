/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floatprac.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 04:48:32 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 04:58:16 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float*	biggest_float(float*, float*);

int	main()
{
	float x = 9910.890;
	float y = 1233.0;

	printf("y: %p\n", &y);
	printf("x: %p\n", &x);

	float *b = biggest_float(&x, &y);
	printf("b: %p\n", b);
	return (0);
}

float* biggest_float(float *pfloat1, float *pfloat2)
{
	float *biggest;

	if (*pfloat1 > *pfloat2)
	{
		biggest = pfloat1;
	}
	else
	{
		biggest = pfloat2;
	}
	return biggest;
}
