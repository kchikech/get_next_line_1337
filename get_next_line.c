/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 02:13:15 by hkchikec          #+#    #+#             */
/*   Updated: 2019/06/25 19:59:28 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char		**buff[BUFF_SIZE + 1];
	static char	*tab[5000];
	char		*tmp;
	int			bytes;

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (!tab[fd])
		tab[fd] = ft_strnew(0);
	bytes = read(fd, buff, BUFF_SIZE);
}