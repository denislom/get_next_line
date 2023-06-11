/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:20:08 by dlom              #+#    #+#             */
/*   Updated: 2023/06/11 13:51:43 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the helper functions
/*
locates the first occurence of a specific character in a strig
takes two argument: the string to search in and the character to search for
RETURNS a pointer to the first occurence of the character or NULL if
the character is not found.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
