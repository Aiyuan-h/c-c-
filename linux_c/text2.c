/*************************************************************************
    > File Name: text2.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2014年10月22日 星期三 20时56分21秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	char c;
	FILE *fp;
	fp=fopen("tee","r");
//	scanf(stdin,"%c",&c);
	fscanf(fp,"%c",&c);
	printf("%c",c);
	return 0;
}
