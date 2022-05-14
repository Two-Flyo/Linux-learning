#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	//系统接口
	const char* msg1 = "hello stdin!\n";
	write(1,msg1,strlen(msg1));

	//const char* msg2 = "hello stdout!\n";
	//write(2,msg2,strlen(msg2));
	
	//C语言接口
	printf("hello printf\n");	       //stdout 
	fprintf(stdout,"hello fprintf\n"); //stdout 
	fputs("hello fputs\n",stdout);       //stdout 
	fflush(stdout);

	//close(1);
	fork();
	return 0;
}
