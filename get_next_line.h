/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:06:00 by celadia           #+#    #+#             */
/*   Updated: 2021/12/07 17:06:00 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*buff_str_init(int buff_size);
void	ft_free_ptr(char **ptr1, char **ptr2);
int		ft_str_chr(char *str, ssize_t *len);
void	ft_str_cpy(char *str, ssize_t line_len);
char	*ft_str_join(char *dst, char *src, ssize_t line_len);

#endif //GET_NEXT_LINE_H
