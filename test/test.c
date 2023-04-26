# include <stdarg.h>
# include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int main()
{
	int p;
	//p = _printf("hello %s world   %s","siek,esivc,    ");
	char *str = NULL;
	printf("hello %s world   %s", str, "siek,esivc,    ");
	return (0);
}
