#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct convert - struct for symbols and functions.
 *
 * @sym: The format symbol
 * @f: The function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*get_func(char x))(va_list);

#endif
