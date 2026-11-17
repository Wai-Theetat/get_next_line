# get_next_line

A C function that reads a file descriptor **one line at a time** (42 curriculum).

```c
char *get_next_line(int fd);
```

Each call returns the next line (including `\n`), or `NULL` at end of file or on error. The caller frees the returned line.

## How it works
- Reads `BUFFER_SIZE` bytes at a time with `read()`
- Keeps leftover data between calls in a static buffer, so no data is lost
- Works with files, stdin, and any `BUFFER_SIZE` (1 to very large)

## Usage
```bash
cc -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c
```
```c
int   fd = open("file.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)))
{
    printf("%s", line);
    free(line);
}
close(fd);
```

`test.py` is a small helper script for testing.
