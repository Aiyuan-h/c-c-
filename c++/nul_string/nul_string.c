#include <stdio.h>
#define NUL '\0'
int main()
{
//	char vec[]={'1','2','3'};/*char vec[]={'1','2','3','\0'};*/
//	char *str=vec;
	char *str="1234";
	int i,j;
	j=sizeof(str);//�Զ����'/0'
	printf("%d\n",j);
	for(i=0;i<j;i++)
	{
		if(str[i]==NUL)
			printf("end of string %d\n ",i);	
	}
	printf("%s\n",str);//�������ַ��������õ�ַ��
}
