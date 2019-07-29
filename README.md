<p align="center">
<img src="logo.png"
height="300" width="350"/>
</p>

# printf

The functions in the `printf()` produce output according to a format as described below. The functions `printf()` and write output to stdout, the standard output stream

C99 and POSIX.1-2001 specify that the results are undefined if a call to `printf()` would cause copying to take place between objects that overlap (e.g., if the target string array and one of the supplied input arguments refer to the same buffer).

### Return value

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

## Tasks

##### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
 - c
 - s
 - %

##### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

- d
- i

##### 2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.

## Social

**Sebastian Galvis [@JuanSGalvisH](https://twitter.com/JuanSGalvisH) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/JuanSGalvisH)**

**Santiago Yanguas
 [@TYGames3](https://twitter.com/TYGames3) [![Twitter Follow](https://img.shields.io/twitter/url/https/github.com/tterb/hyde.svg?style=social)](https://twitter.com/TYGames3)**
