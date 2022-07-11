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
	convert_match arr[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", print_percent},
		{NULL, NULL}

	};
	while (arr[i].id)
	{
		if (x == arr[i].id[0])
			return (arr[i].f);
	i++;
	}
	return (NULL);
}

