#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*buffer;
	int			byte_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if(temp)
			free(temp);
		temp = NULL;
		return (NULL);
	}
	byte_read = read(fd, buffer, BUFFER_SIZE);

}
