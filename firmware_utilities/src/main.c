#include "stdio.h"
#include "firmware_macros.h"

void main()
{
	int a = 10;
	printf("Input = 0x%x, output = 0x%x", a, ALIGN8(a));
}