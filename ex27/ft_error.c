/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:16:47 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/10 16:39:40 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_error(int n)
{
	if (n == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (n > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}
