/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdharmar <tdharmar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:38:22 by tdharmar          #+#    #+#             */
/*   Updated: 2025/11/20 01:38:26 by tdharmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define OPEN_FD_SIZE 1024

# include "libft/libft.h"

char	*get_next_line(int fd);
char	*ft_read_more(int fd);
char	*ft_update_buf(int fd, char *txt);
char	*ft_get_first_line(char *txt);
char	*ft_trim_first_line(char *txt);

//Utils
char	*ft_append_str(char *fst, char *snd, size_t sndlen);
char	**get_buffer_ref(int fd);
void		gnl_cleanup(int fd);

#endif