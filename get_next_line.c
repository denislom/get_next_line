/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:11:44 by dlom              #+#    #+#             */
/*   Updated: 2023/06/11 13:42:31 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>
/*
RETURN: the line that was read or NULL if an error occured or if there
	is nothing else to be read.
Function that returns a line read from a file descriptor.
*/
char	ft_i_read_file(int fd, char *char_absorber)
{
	
}

char	*get_next_line(int fd)
{
	static char	*store[2048];
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	store[fd] = ft_i_read_file(fd, store[fd]);
	if (store[fd] == NULL)
		return (NULL);
	//line =
	//store[fd] =
	//return(line)
}
