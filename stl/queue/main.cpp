/*
 * （1）queue使用一种先进先出（FIFO）的存储和访问策略,进入的队列对象放置到队尾,而离开的队列对象则从队首删除.
 * （2）queue适配器要求backpush_back、front、和push_front,因此它可以构造与list或deque之上，但不能基于
 *     vector构造，因为不支持遍历。priority_queue除了front、push_back和pop_back操作之外，还要求随机访问的能力，因此它可
 *     以构造于vector或deque上，单不能基于list构造
 * （3）队头只支持pop和top，front，但是队尾只能支持push
 *
 详细用法:
    定义一个queue的变量     queue<Type> M
    查看是否为空范例        M.empty()    是的话返回1，不是返回0;
    从已有元素后面增加元素   M.push()
    输出现有元素的个数      M.size()
    显示第一个元素          M.front()
    显示最后一个元素        M.back()
    清除第一个元素          M.pop()
 */

#include <iostream>
#include <queue>
#include<assert.h>
#include<cstdlib>
#include<queue>
using namespace std;

int main()
{
    queue<int> myqueue;
    size_t i=0;
    cout<<"现在queue是否为empty？"<<myqueue.empty()<<endl;

    for(i=0;i<10;++i){
        myqueue.push(i);
    }

    for(i=0;i<myqueue.size();++i){
        cout<<"myqueue.size():"<<myqueue.size()<<endl;
        cout<<myqueue.front()<<endl;
        myqueue.pop();
    }
    system("PAUSE"); //相当于输出 press any key to contineue
    return 0;
}
