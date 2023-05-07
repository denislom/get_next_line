/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:11:44 by dlom              #+#    #+#             */
/*   Updated: 2023/05/07 13:41:09 by dlom             ###   ########.fr       */
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
	static char	*char_accumulator[2048];
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	char_accumulator[fd] = ft_i_read_file(fd, char_accumulator[fd]);
	if (char_accumulator[fd] == NULL)
		return (NULL);
	//line =
	//char_accumulator[fd] =
	//return(line)
}
