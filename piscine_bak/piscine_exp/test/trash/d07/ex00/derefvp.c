/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   derefvp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 05:10:44 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 05:14:38 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int x = 10;
	void *vp = &x;

	*(int *)vp = 16;
// you have to cast in order to deref a void pointer
//  *(int *)vp = 16; casts the vp to int
	printf("x: %d\n", x);

	return (0);
}
