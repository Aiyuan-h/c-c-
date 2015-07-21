/*deque: 是一个double-ended queue,
    1)支持随即存取，也就是[]操作符，
    2)支持两端操作，push(pop)-back(front)，在两端操作上与list效率差不多

    因此在实际使用时，如何选择这三个容器中哪一个，应根据你的需要而定，一般应遵循下面的原则：
    1、如果你需要高效的随即存取，而不在乎插入和删除的效率，使用vector
    2、如果你需要大量的插入和删除，而不关心随即存取，则应使用list
    3、如果你需要随即存取，而且关心两端数据的插入和删除，则应使用deque。
*/

#include <iostream>
#include<deque>
#include<stddef.h>
using namespace std;
void print_deque(const deque<int>& d);
int main()
{
    //创建deque
    deque<int> d1;                      //创建一个没有任何元素的deque对象
    deque<int> d2(10);                  //创建一个具有10个元素的deque对象，每个元素值为默认
    deque<double> d3(10,5.5);           //创建一个具有10个元素的duque对象，每个元素的初始值为5.5
    deque<double> d4(d3);               //通过拷贝一个deque对象的元素值，创建一个新的deque对象

    //初始化赋值：同vector一样，使用尾部插入函数push_back()
    for(size_t i=1;i<6;++i)
        d1.push_back(i*10);

    //遍历元素：1-下标方式 2-迭代器方式 反向遍历（略）
    cout<<"print_deque(d1):"<<endl;
    print_deque(d1);

    //元素插入：尾部插入用push_back(),头部插入用push_front(),其他位置插入用insert(&pos,elem)
    cout<<"d1.push_front(100):"<<endl;
    d1.push_front(100);
    print_deque(d1);
    cout<<"d1.insert(d1.begin()+3,200):"<<endl;
    d1.insert(d1.begin()+2,200);
    print_deque(d1);

    //元素删除 尾部删除用pop_back();头部删除用pop_front();
    //任意迭代位置或迭代区间上的元素删除用erase(&pos)/erase(&first,&last);删除所有元素用clear()
    cout<<"d1.pop_front():"<<endl;
    d1.pop_front();
    print_deque(d1);

    cout<<"d1.erase(d1.erase(d1.begin()+1:"<<endl;
    d1.erase(d1.begin()+1);    //删除第二个元素d1[1]
    print_deque(d1);

    cout<<"d1.erase(d1.begin(),d1.begin()+2)="<<endl;
    d1.erase(d1.begin(),d1.begin()+2);
    print_deque(d1);

    cout<<"d1.clear():"<<endl;
    d1.clear();
    print_deque(d1);

    return 0;
}

void print_deque(const deque<int>& d)
{
    cout<<"\n使用下标\n";
    for(size_t i=0;i<d.size();++i){
        cout<<"d["<<i<<"]="<<d[i]<<",";
    }

    cout<<"\n使用迭代器\n";
    deque<int>::const_iterator iter=d.begin();
    for(;iter!=d.end();++iter){
        cout<<"d["<<iter-d.begin()<<"]="<<*iter<<",";
    }
    cout<<endl;
}
