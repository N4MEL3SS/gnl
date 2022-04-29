/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:05:52 by celadia           #+#    #+#             */
/*   Updated: 2021/12/07 17:05:52 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_read_file(int fd, char *buff_str)
{
	char		*line_str;
	ssize_t		line_len;
	ssize_t		buff_len;
	ssize_t		full_len;

	line_str = malloc(sizeof(char) * 1);
	*line_str = '\0';
	full_len = 0;
	if (!ft_str_chr(buff_str, &line_len))
	{
		buff_len = 1;
		while (buff_len > 0 && !ft_str_chr(buff_str, &line_len))
		{
			full_len += line_len;
			line_str = ft_str_join(line_str, buff_str, full_len);
			buff_len = read(fd, buff_str, BUFFER_SIZE);
			if (!line_str || buff_len == -1)
				return (NULL);
			*(buff_str + buff_len) = '\0';
		}
	}
	line_str = ft_str_join(line_str, buff_str, full_len + line_len);
	ft_str_cpy(buff_str, line_len);
	return (line_str);
}

char	*get_next_line(int fd)
{
	static char		*buff_str;
	char			*line_str;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, "", 0) == -1)
		return (NULL);
	if (!buff_str)
		buff_str = buff_str_init(BUFFER_SIZE);
	line_str = get_read_file(fd, buff_str);
	if (line_str == NULL || *line_str == '\0')
		ft_free_ptr(&line_str, &buff_str);
	return (line_str);
}
