/*************************************************************************
    > File Name: text3.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2014年10月22日 星期三 21时53分16秒
 ************************************************************************/

#include<stdio.h>
int main()
{
char buf[20];
sscanf("iios/12DDWDFF@122", "%*[^/]",buf);
//sscanf("hello, world",  "%*s%s",  buf);
printf("%s\n", buf);
}
