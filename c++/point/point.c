#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<assert.h>
#define TRUE 1
#define FALSE 0

int find_char(char **strings, char value);
int find_char1(char **strings, char value);
int main(void)
{
    int v=20;

    char *str[3]={"sdgdfg","fgh",NULL};

    v=find_char1(&str,'h');
    printf("%d",v);
    return 0;
}

int find_char(char **strings, char value)
{
    char *string; /*���ǵ�ǰ���ڲ��ҵ��ַ�*/
    /*
    **����ÿ���ַ�
    */
    while((string=*strings++)!=NULL){/*ָ�������ָ���Ƿ�Ϊ��*/
        /*
        **�۲�ÿ���ַ������Ƿ���������Ҫ���ҵ��ַ�
        */
        while(*string!='\0'){
            if(*string++==value)
                return TRUE;
        }
    }
    return FALSE;
}

int find_char1(char **strings, char value)
{
    assert(strings!=NULL);
    while(*strings!=NULL){
        while(**strings!='\0'){
            if (*(*strings)++==value)
                return TRUE;
        }
        strings++;
    }
    return FALSE;
}