/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:22:20 by ndubouil          #+#    #+#             */
/*   Updated: 2017/11/10 16:34:50 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 10

# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_error(int n);

#endif
