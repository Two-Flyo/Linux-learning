#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	if(fork()==0)
	{
		printf("command begin...\n");
		//execl("./exe","myexe",NULL);		
		
		char *env[]={
			"ENV0=hhhhhhhhhh",
			"ENV1=hhhhhhhhhh",
			"ENV2=hhhhhhhhhh",
			"ENV3=hhhhhhhhhh",
			NULL
		};
		char* argv[]={
			"myexe",
			NULL
		};
		execve("./exe",argv,env);
	//	execle("./exe","exe",NULL,env);
		//  execlp("ls","ls","-a","-l","-d",NULL);

	//	execl("/usr/bin/ls","ls","-a","-l","-i",NULL);
	 //   char *argv[]={"ls","-a","-i","-l",NULL};
	  //  execv("/usr/bin/ls",argv);
	//	execvp("ls",argv);



		printf("command end...\n");
		exit(1);
	}
	waitpid(-1,NULL,0);
	printf("wait child success!\n");
	return 0;
}
