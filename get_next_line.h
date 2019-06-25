/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 02:13:22 by hkchikec          #+#    #+#             */
/*   Updated: 2019/05/23 00:17:08 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../Libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

int		get_next_line(const int fd, char **line);
#endif
