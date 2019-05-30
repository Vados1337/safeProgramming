#include <stdio.h>
#include <string.h>

void main(int argc, char **argv)
{
	int i = 1;
	char buffer[64];
	char tmp[] = "\x01\x02\x03";
	snprintf(buffer, sizeof buffer, argv[1]);
	buffer[sizeof(buffer) - 1] = 0;
	printf("buffer : [%s] (%d)\n", buffer, strlen(buffer));
	printf("i = %d (%p)\n", i, &i);
	
}
