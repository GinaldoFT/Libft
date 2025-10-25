# Libft Function Documentation

This document provides detailed information about the functions implemented in the `libft` project.

---

## Part 1 — Libc Functions

### `ft_isalpha`
**Prototype**
```c
int ft_isalpha(int c);
```
**Description**
Checks for an alphabetic character.
**Parameters**
- `c`: The character to be checked.
**Return Value**
Returns a non-zero value if `c` is an alphabet, otherwise returns 0.

### `ft_isdigit`
**Prototype**
```c
int ft_isdigit(int c);
```
**Description**
Checks for a digit (0 through 9).
**Parameters**
- `c`: The character to be checked.
**Return Value**
Returns a non-zero value if `c` is a digit, otherwise returns 0.

### `ft_isalnum`
**Prototype**
```c
int ft_isalnum(int c);
```
**Description**
Checks for an alphanumeric character (a-z, A-Z, 0-9).
**Parameters**
- `c`: The character to be checked.
**Return Value**
Returns a non-zero value if `c` is alphanumeric, otherwise returns 0.

### `ft_isascii`
**Prototype**
```c
int ft_isascii(int c);
```
**Description**
Checks whether `c` is a 7-bit unsigned char value that fits into the ASCII character set.
**Parameters**
- `c`: The character to be checked.
**Return Value**
Returns a non-zero value if `c` is an ASCII character, otherwise returns 0.

### `ft_isprint`
**Prototype**
```c
int ft_isprint(int c);
```
**Description**
Checks for any printable character including space.
**Parameters**
- `c`: The character to be checked.
**Return Value**
Returns a non-zero value if `c` is printable, otherwise returns 0.

### `ft_strlen`
**Prototype**
```c
size_t ft_strlen(const char *s);
```
**Description**
Calculates the length of the string pointed to by `s`, excluding the terminating null-byte (`'\0'`).
**Parameters**
- `s`: The null-terminated string to be measured.
**Return Value**
Returns the number of bytes in the string `s`.

### `ft_memset`
**Prototype**
```c
void *ft_memset(void *s, int c, size_t n);
```
**Description**
Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.
**Parameters**
- `s`: A pointer to the memory area to be filled.
- `c`: The character to fill the memory area with.
- `n`: The number of bytes to be filled.
**Return Value**
Returns a pointer to the memory area `s`.

### `ft_bzero`
**Prototype**
```c
void ft_bzero(void *s, size_t n);
```
**Description**
Erases the data in the `n` bytes of the memory starting at the location pointed to by `s`, by writing zeros (`'\0'` characters).
**Parameters**
- `s`: A pointer to the memory area to be zeroed.
- `n`: The number of bytes to be zeroed.
**Return Value**
None.

### `ft_memcpy`
**Prototype**
```c
void *ft_memcpy(void *dst, const void *src, size_t n);
```
**Description**
Copies `n` bytes from memory area `src` to memory area `dst`. The memory areas must not overlap.
**Parameters**
- `dst`: A pointer to the destination memory area.
- `src`: A pointer to the source memory area.
- `n`: The number of bytes to copy.
**Return Value**
Returns a pointer to `dst`.

### `ft_memmove`
**Prototype**
```c
void *ft_memmove(void *dst, const void *src, size_t len);
```
**Description**
Copies `len` bytes from memory area `src` to memory area `dst`. The memory areas may overlap.
**Parameters**
- `dst`: A pointer to the destination memory area.
- `src`: A pointer to the source memory area.
- `len`: The number of bytes to copy.
**Return Value**
Returns a pointer to `dst`.

### `ft_strlcpy`
**Prototype**
```c
size_t ft_strlcpy(char *dest, const char *src, size_t size);
```
**Description**
Copies up to `size - 1` characters from the `NULL`-terminated string `src` to `dest`, `NULL`-terminating the result.
**Parameters**
- `dest`: The destination buffer.
- `src`: The source string.
- `size`: The total size of the destination buffer.
**Return Value**
Returns the total length of the string it tried to create (the length of `src`).

### `ft_strlcat`
**Prototype**
```c
size_t ft_strlcat(char *dest, const char *src, size_t dstsize);
```
**Description**
Appends the `NULL`-terminated string `src` to the end of `dest`. It will append at most `dstsize - strlen(dest) - 1` bytes, `NULL`-terminating the result.
**Parameters**
- `dest`: The destination buffer.
- `src`: The source string.
- `dstsize`: The total size of the destination buffer.
**Return Value**
Returns the total length of the string it tried to create (initial length of `dest` plus length of `src`).

### `ft_toupper`
**Prototype**
```c
int ft_toupper(int c);
```
**Description**
Converts a lower-case letter to the corresponding upper-case letter.
**Parameters**
- `c`: The character to convert.
**Return Value**
Returns the corresponding upper-case letter if the character is a lower-case letter, otherwise the character remains unchanged.

### `ft_tolower`
**Prototype**
```c
int ft_tolower(int c);
```
**Description**
Converts an upper-case letter to the corresponding lower-case letter.
**Parameters**
- `c`: The character to convert.
**Return Value**
Returns the corresponding lower-case letter if the character is an upper-case letter, otherwise the character remains unchanged.

### `ft_strchr`
**Prototype**
```c
char *ft_strchr(const char *s, int c);
```
**Description**
Returns a pointer to the first occurrence of the character `c` in the string `s`.
**Parameters**
- `s`: The string to be searched.
- `c`: The character to be located.
**Return Value**
Returns a pointer to the matched character or `NULL` if the character is not found.

### `ft_strrchr`
**Prototype**
```c
char *ft_strrchr(const char *s, int c);
```
**Description**
Returns a pointer to the last occurrence of the character `c` in the string `s`.
**Parameters**
- `s`: The string to be searched.
- `c`: The character to be located.
**Return Value**
Returns a pointer to the matched character or `NULL` if the character is not found.

### `ft_strncmp`
**Prototype**
```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```
**Description**
Compares the first `n` bytes of the strings `s1` and `s2`.
**Parameters**
- `s1`: The first string to compare.
- `s2`: The second string to compare.
- `n`: The maximum number of characters to compare.
**Return Value**
Returns an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or be greater than `s2`.

### `ft_memchr`
**Prototype**
```c
void *ft_memchr(const void *s, int c, size_t n);
```
**Description**
Scans the initial `n` bytes of the memory area pointed to by `s` for the first instance of `c`.
**Parameters**
- `s`: The memory area to be scanned.
- `c`: The character to be located.
- `n`: The number of bytes to be scanned.
**Return Value**
Returns a pointer to the matching byte or `NULL` if the character does not occur in the given memory area.

### `ft_memcmp`
**Prototype**
```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```
**Description**
Compares the first `n` bytes of memory areas `s1` and `s2`.
**Parameters**
- `s1`: The first memory area.
- `s2`: The second memory area.
- `n`: The number of bytes to compare.
**Return Value**
Returns an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or be greater than `s2`.

### `ft_strnstr`
**Prototype**
```c
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
```
**Description**
Locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched.
**Parameters**
- `haystack`: The string to be searched.
- `needle`: The string to be located.
- `len`: The maximum number of characters to search.
**Return Value**
If `needle` is an empty string, `haystack` is returned; if `needle` occurs nowhere in `haystack`, `NULL` is returned; otherwise a pointer to the first character of the first occurrence of `needle` is returned.

### `ft_atoi`
**Prototype**
```c
int ft_atoi(const char *nptr);
```
**Description**
Converts the initial portion of the string pointed to by `nptr` to `int`.
**Parameters**
- `nptr`: The string to be converted.
**Return Value**
Returns the converted integer value.

### `ft_calloc`
**Prototype**
```c
void *ft_calloc(size_t count, size_t size);
```
**Description**
Allocates memory for an array of `count` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero.
**Parameters**
- `count`: The number of elements to allocate.
- `size`: The size of each element.
**Return Value**
Returns a pointer to the allocated memory, or `NULL` if the allocation fails.

### `ft_strdup`
**Prototype**
```c
char *ft_strdup(const char *s);
```
**Description**
Returns a pointer to a new string which is a duplicate of the string `s`. Memory for the new string is obtained with `malloc`.
**Parameters**
- `s`: The string to be duplicated.
**Return Value**
Returns a pointer to the duplicated string, or `NULL` if the allocation fails.

---

## Part 2 — Additional Functions

### `ft_substr`
**Prototype**
```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```
**Description**
Allocates and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.
**Parameters**
- `s`: The source string.
- `start`: The starting index of the substring.
- `len`: The maximum length of the substring.
**Return Value**
Returns the substring, or `NULL` if the allocation fails.

### `ft_strjoin`
**Prototype**
```c
char *ft_strjoin(char const *s1, char const *s2);
```
**Description**
Allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`.
**Parameters**
- `s1`: The prefix string.
- `s2`: The suffix string.
**Return Value**
Returns the new string, or `NULL` if the allocation fails.

### `ft_strtrim`
**Prototype**
```c
char *ft_strtrim(char const *s1, char const *set);
```
**Description**
Allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.
**Parameters**
- `s1`: The string to be trimmed.
- `set`: The set of characters to trim.
**Return Value**
Returns the trimmed string, or `NULL` if the allocation fails.

### `ft_split`
**Prototype**
```c
char **ft_split(char const *s, char c);
```
**Description**
Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must be terminated by a `NULL` pointer.
**Parameters**
- `s`: The string to be split.
- `c`: The delimiter character.
**Return Value**
Returns the array of new strings, or `NULL` if the allocation fails.

### `ft_itoa`
**Prototype**
```c
char *ft_itoa(int n);
```
**Description**
Allocates and returns a string representing the integer `n`.
**Parameters**
- `n`: The integer to convert.
**Return Value**
Returns the string representation of the integer, or `NULL` if the allocation fails.

### `ft_strmapi`
**Prototype**
```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
**Description**
Applies the function `f` to each character of the string `s` to create a new string resulting from successive applications of `f`.
**Parameters**
- `s`: The string to iterate over.
- `f`: The function to apply to each character.
**Return Value**
Returns the new string created from the successive applications of `f`, or `NULL` if allocation fails.

### `ft_striteri`
**Prototype**
```c
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```
**Description**
Applies the function `f` to each character of the string `s`, passing its index as the first argument. The string is modified in-place.
**Parameters**
- `s`: The string to iterate over.
- `f`: The function to apply to each character.
**Return Value**
None.

### `ft_putchar_fd`
**Prototype**
```c
void ft_putchar_fd(char c, int fd);
```
**Description**
Outputs the character `c` to the given file descriptor.
**Parameters**
- `c`: The character to output.
- `fd`: The file descriptor on which to write.
**Return Value**
None.

### `ft_putstr_fd`
**Prototype**
```c
void ft_putstr_fd(char *s, int fd);
```
**Description**
Outputs the string `s` to the given file descriptor.
**Parameters**
- `s`: The string to output.
- `fd`: The file descriptor on which to write.
**Return Value**
None.

### `ft_putendl_fd`
**Prototype**
```c
void ft_putendl_fd(char *s, int fd);
```
**Description**
Outputs the string `s` to the given file descriptor, followed by a newline.
**Parameters**
- `s`: The string to output.
- `fd`: The file descriptor on which to write.
**Return Value**
None.

### `ft_putnbr_fd`
**Prototype**
```c
void ft_putnbr_fd(int n, int fd);
```
**Description**
Outputs the integer `n` to the given file descriptor.
**Parameters**
- `n`: The integer to output.
- `fd`: The file descriptor on which to write.
**Return Value**
None.