# include <stdarg.h>
# include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
int main()
{
	int p;
	p = _printf("hello %s world","HALO");
	printf("%d",p);
	return (0);
}
