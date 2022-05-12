#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{


	//int fd = open("./log.txt",O_WRONLY|O_TRUNC);
	//int fd = open("./log.txt",O_RDWR);
	//if(fd<0)
	//{
	//	perror("open");
	//	return 1;
	//}
	//dup2(fd,0);//本来应该显示到显示器的内容，写入到文件中！
	//
	//char buf[1024];
	//scanf("%s",buf);

	//printf("%s\n",buf);
	//stdout -> 1 -> struct file* ->log.txt

	//printf("hello printf\n");
	//fprintf(stdout,"hello fprintf\n");
	//fputs("hello fputs\n",stdout);
	//printf("stdin->%d\n",stdin->_fileno);
	//printf("stdout->%d\n",stdout->_fileno);
	//printf("stderr->%d\n",stderr->_fileno);

	//FILE*fp = fopen("./log.txt","r");
	//if(NULL==fp)
	//{
	//	perror("fopen");
	//	return 0;
	//}

	//printf("fp->%d\n",fp->_fileno);

	//close(0);
	//int fd = open("./log.txt",O_RDONLY);
	////fd==0
	//printf("fd:%d",fd);
	//char line[128];
	//while(fgets(line,sizeof(line)-1,stdin))
	//{
	//	printf("%s",line);
	//}
	close(1);
	int fd = open("./log.txt",O_CREAT |O_WRONLY,0644);
	printf("fd: %d\n",fd);
	

	fprintf(stdout,"hello world!\n");
	fprintf(stdout,"hello world!\n");
	fprintf(stdout,"hello world!\n");
	fprintf(stdout,"hello world!\n");
	fprintf(stdout,"hello world!\n");
	fprintf(stdout,"hello world!\n");

	close(fd);
	//char buff[64];
	//
	//ssize_t s =	read(0,buff,sizeof(buff));
	//buff[s]=0;
	//printf("echo# %s \n",buff);


   // const char* msg = "hello world!";
   // write(1,msg,strlen(msg));
   // write(2,msg,strlen(msg));



	//int fd = open("log.txt",O_RDONLY);
	//if(fd<0)
	//{
	//	perror("open");
	//	return 1;
	//}
	//
	//char buffer[1024];
	//ssize_t s = read(fd,buffer,sizeof(buffer)-1);
	//if(s>0)
	//{
	//	buffer[s] = 0;
	//	printf("%s\n",buffer);
	//}
	//	
	//close(fd);

	//return 0;

//	int fd0 = open("log0.txt",O_CREAT|O_WRONLY,0644);
//	int fd1 = open("log1.txt",O_CREAT|O_WRONLY,0644);
//	int fd2 = open("log2.txt",O_CREAT|O_WRONLY,0644);
//	int fd3 = open("log3.txt",O_CREAT|O_WRONLY,0644);
//	int fd4 = open("log4.txt",O_CREAT|O_WRONLY,0644);
//	printf("%d %d %d %d %d \n",fd0,fd1,fd2,fd3,fd4);
//	close(fd0);
//	close(fd1);
//	close(fd2);
//	close(fd3);
//	close(fd4);
//
	//if(fd<0)
	//{
	//	perror("open");
	//	return 1;
	//}
	//
	//const char* msg = "hello world!";

	//int cnt = 5;
	//while(cnt--)
	//{
	//	write(fd,msg,strlen(msg));//写入时不需要加\0
	//	//\0作为字符串的结束，只是C的规定
	//}

	//close(fd);

	return 0;
}

