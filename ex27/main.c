/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:26:29 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/10 16:37:28 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_error(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(fd);
	return (0);
}
