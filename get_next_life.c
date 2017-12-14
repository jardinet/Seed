/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <mwragg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:37:25 by mwragg            #+#    #+#             */
/*   Updated: 2017/12/14 13:04:05 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

/*
 *
 *	t_fd	toto;
 *	t_list	*node;
 *
 * node = ft_lstnew(&toto, sizeof(toto));
 *
 *
 * */


void	test()
{
	t_list	*begin;

	begin = NULL;

}


int		get_buf( **elem);
{
	while (len < 4096 && ret = read(fd, bufr, BUFF_SIZE))
	{
		ib = 0;
		if (BUFF_SIZE < 4096 && len + BUFF_SIZE < 4096)
		{
			strncat(bufr, buf, BUFF_SIZE);
			len = ret + len;
			ib = 1;
		}
		if else
			len = ret;
		break;
	}
}

int		get_next_line(const int fd, char **line)
{
	if (BUFF_SIZE < 0)
		return (-1);
	//create elem and memset it;
	//ft
	if (len == 0)
	{
		//maybe memset here
	}
	if (len > 0)
		ib = 0 ? get_line(bufr, len) : get_line(buf, len);
	if (ret = 0 && len = 0)
		return (0);
	return (-1);
}


/*bzero or memset char*
 * while (inL == 1)
 * {
 *	if (ret > 0)
 *	{
 *		usebuff();
 *	}
 *	else (ret == 0)
 *	{
 *		read
 *		usebuff();
 *	}
 * }
 */
/*	ret = read(fd, buf, BUFF_SIZE);
 *	lenl = strlen(buf) - strlen(strchr(buf, '\n');
 *	*line = ft_strsub(buf, 0, lenl);
 *}
 */

get_next_line()
{
	t_list coucou;
	coucou = ft_creation d'elem
	reading_line((t_fd*)coucou.content);
	get_line(&elem);

}
int		main(int ac, char **argv)
{
	int		fd;
	char	*line;

	if (ac == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			write(2, "FILE COULD NOT OPEN\n", 20);
			return (-1);
		}
		write(2, "I got to here\n", 14);
		if (get_next_line(fd, &line) == 1)
			ft_putstr(line);
		return (1);
	}
}
