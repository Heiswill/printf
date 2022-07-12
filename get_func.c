#include "main.h"
#include <stddef.h>

/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	conver_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"r", print_reversed},
		{"R", rot13},
		{NULL, NULL}
	};
	while (arr[i].sym)
	{
		if (x == arr[i].sym[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
