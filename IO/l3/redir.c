#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	const char* msg1 = "hello stdin!\n";
	write(1,msg1,strlen(msg1));

	const char* msg2 = "hello stdout!\n";
	write(2,msg2,strlen(msg2));
	
	printf("hello printf\n");
	fprintf(stdout,"hello fprintf\n");
	
	close(1);
	return 0;
}
