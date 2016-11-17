/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 12:27:14 by khanson           #+#    #+#             */
/*   Updated: 2016/10/30 23:28:30 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush (int x, int y)
{	
	int counter_column; int counter_row;

	counter_column = 0;
	counter_row = 0;
	if(x > 0 && y > 0)
	{	
		while(counter_row < y)
		{
			while(counter_column < x)
			{		
			if(counter_row == 0 && counter_column == 0)
			{
			ft_putchar('/');
			}
			else if((counter_row == 0 && counter_column == x - 1) || (counter_row == y - 1 && counter_column == 0))
			{
			ft_putchar('\\');
			}
			else if(counter_row == y - 1 && counter_column == x - 1)
			{
			ft_putchar('/');
			}
			else if(counter_row == 0) || (counter_row == y - 1) || (counter_column == 0) || (counter_column == x - 1)
			{
			ft_putchar('*');
			}
			else
			{
			ft_putchar(' ');
			}
			counter_column++;
			}
		ft_putchar('\n');
		counter_column = 0;
		counter_row++;	
		}
	}
}
