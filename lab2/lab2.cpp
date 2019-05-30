#include <stdio.h>

void show_array(int arrlen, char array[])
{
	char buffer[32];
	int i;

	for (i = 0; i < arrlen; i++) buffer[i] = array[i];
	printf(buffer);
}

int main()
{
	char mystr[] = "1223123234324234234234234234242342342342342342342343";
	show_array(101, mystr);
	return 0;
}
