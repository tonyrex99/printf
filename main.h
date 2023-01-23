#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
void _putchar(char);
int _strlen(char *);
int _abs(int d);
char *_itoa(int a);
int number_of_digits(unsigned int d);
void reverse_string(char *);
char *_strcat(char *, char *);
char *handle_specifier(char specifier, va_list va);
char get_specifier(char *s);
int _puts(char *);
int _printf(const char *format, ...);
#endif
