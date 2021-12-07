/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:06:28 by celadia           #+#    #+#             */
/*   Updated: 2021/12/07 17:06:28 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_free_ptr(void *ptr)
{
	free(ptr);
	return (NULL);
}

void	ft_str_cpy(char *str, ssize_t line_len)
{
	char		*shift;

	shift = str + line_len;
	while (*shift)
		*(str++) = *(shift++);
	*str = '\0';
}

int	ft_str_chr(char *str, ssize_t *len)
{
	*len = 0;
	while (*str && *str != '\n' && ++*len)
		str++;
	if (*str == '\n' && ++*len)
		return (1);
	return (0);
}

char	*ft_str_join(char *dst, char *src, ssize_t line_len)
{
	char	*temp_join;
	char	*temp_dst;
	char	*join;

	if (*src == '\0')
		return (dst);
	line_len++;
	join = malloc(sizeof(char) * (line_len));
	if (!join)
		return (NULL);
	temp_join = join;
	temp_dst = dst;
	while (*dst && --line_len)
		*(join++) = *(dst++);
	while (*src && --line_len)
		*(join++) = *(src++);
	*join = '\0';
	free(temp_dst);
	return (temp_join);
}
