/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 02:13:15 by hkchikec          #+#    #+#             */
/*   Updated: 2019/05/23 00:25:26 by hkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
   int		get_next_line(const int fd, char **line)
   {

   }
   */
int main()
{
	int fd,s;
	char *c = (char *) calloc(10000, sizeof(char));
	fd = open("get_next_line.h", O_RDONLY);
	printf("%d",fd);
	s = read(fd,c,10000);
	printf("called read(%d, c, 10).  returned that"
			" %d bytes  were read.\n", fd, s);
	c[s] = '\0'; 
	printf("Those bytes are as follows: %s\n", c);
}
