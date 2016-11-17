/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallnstruct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 05:48:50 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 05:59:35 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct
{
	int height;
	int width;
}

rec_t;

rec_t*	new_rect(void);

int	main()
{
	rec_t *ptr;
	ptr = new_rect();
	
	rec_t rectangle = *ptr;

	rectangle.width = 12;
	rectangle.height = 17;

	free(ptr);

	return (0);
}

rec_t* new_rect(void)
{
	rec_t *p = malloc(sizeof *p);
	return p;
}
