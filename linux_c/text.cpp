/*************************************************************************
    > File Name: text.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2014年10月09日 星期四 20时22分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int
main (int argc, char **argv)
{
  while (*++argv != NULL)
    cout << *argv << endl;
  return 0;
}
