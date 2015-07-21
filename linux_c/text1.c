/*************************************************************************
    > File Name: text1.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2014年10月22日 星期三 20时49分54秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	char buf[]="tesdfsdfsfsdfsst";
	FILE *fp;
	fp=fopen("tee","w");
//	fprintf(stdout,"%s",buf);
	fprintf(fp,"%s",buf);
}
