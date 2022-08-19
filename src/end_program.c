/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:44:50 by vlima-nu          #+#    #+#             */
/*   Updated: 2022/01/25 21:18:40 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_program(t_push_swap *data, int status)
{
	if (status)
		ft_putstr_fd("Error\n", 2);
	if (data)
	{
		if (data->a)
		{
			if (data->a->st)
				free(data->a->st);
			free(data->a);
		}
		if (data->b)
		{
			if (data->b->st)
				free(data->b->st);
			free(data->b);
		}
		if (data->pos)
			free(data->pos);
		if (data->tmp)
			free(data->tmp);
		free(data);
	}
	exit(status);
}
