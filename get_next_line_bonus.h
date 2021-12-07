/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:06:15 by celadia           #+#    #+#             */
/*   Updated: 2021/12/07 17:06:15 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# define FD_MAX 10240

char	*get_next_line(int fd);

void	*ft_free_ptr(void *ptr);
int		ft_str_chr(char *str, ssize_t *len);
void	ft_str_cpy(char *str, ssize_t line_len);
char	*ft_str_join(char *dst, char *src, ssize_t line_len);

#endif //GET_NEXT_LINE_BONUS_H
