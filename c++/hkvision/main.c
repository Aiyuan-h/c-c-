#include <stdio.h>
#include <unistd.h>
#include<fcntl.h>
char buf1[]="this id a test document.";
char buf2[]="hello world.";
int main(void)
{
    int fd =-1;
    char rdbuf[30];
    fd=open("d:\test.txt",O_RDWR|O_CREAT|O_APPEND|O_CREAT);
    write(fd,buf1,24);
    lseek(fd,0,SEEK_SET);
    memset(rdbuf,0,sizeof(rdbuf));
    read(fd,rdbuf,4);
    printf("str1:[%s]\r\n",rdbuf);
    return 0;
}

