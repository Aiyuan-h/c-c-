/*************************************************************************
    > File Name: message.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2014年11月04日 星期二 20时29分58秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<string.h>
#include<sys/msg.h>
int main()
{
	int msgid;
	key_t key;
	struct msginfo buf;
	key=ftok(".",'A');
	msgid=msgget(key,0600|IPC_CREAT);
	msgctl(msgid,IPC_INFO,&buf);
}
