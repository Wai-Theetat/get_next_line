/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdharmar <tdharmar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:21:44 by tdharmar          #+#    #+#             */
/*   Updated: 2025/09/06 14:42:00 by tdharmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	i = 0;
	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	while (i < (count * size))
		res[i] = 0;
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == ch)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == ch)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && (d_len + i) < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

char	*ft_append_str(char *fst, char *snd, size_t sndlen)
{
	char	*result;
	size_t	fstlen;

	fstlen = ft_strlen(fst);
	result = ft_calloc(fstlen + sndlen + 1, 1);
	if (!result)
	{
		free(fst);
		return (NULL);
	}
	ft_strlcat(result, fst, fstlen);
	ft_strlcat(result, snd, fstlen + sndlen + 1);
	free(fst);
	return (result);
}
