#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> c1;


    for(size_t i=0;i<10;++i){  //注意以后不用int 用size_t
        c1.push_back(i); //从尾部push数据(节点)到list中
    }

    c1.push_front(0);        //从头部push数据(节点)到list中

    c1.pop_back();           //从尾部pop数据(节点)出去
    int &i=c1.back();        //获取list中尾部数据(节点),此处使用引用，因为back，front均返回引用，
    const int &ii=c1.front();//引用可以修改原容器的值，只是读取的话直接赋给变量也可以

    cout<<"The last integer of c1 is "<<i<<endl;
    cout<<"The front integer of c1 is "<<ii<<endl;

    cout<<"for循环读出数据："<<endl;


    /*
     * 注意这里链表的遍历也用++来完成，一般是用next指针来遍历链表的，
     * 思考一下，这可能与迭代器有关，迭代器可能对next进行了重载
     */
    //循环遍历数据(使用正向迭代器)
    list<int>::iterator it; //定义遍历迭代器
    for(it=c1.begin();it!=c1.end();++it){
        cout<<*it<<endl;
    }

    //循环遍历数据(使用逆向迭代器)
    list<int>::reverse_iterator itr; //定义遍历迭代器
    for(itr=c1.rbegin();itr!=c1.rend();++itr){
        cout<<*itr<<endl;
    }
    cout<<"the list size is :"<<c1.size()<<endl;

    cout<<"--------------insert-------------"<<endl;
    /*
     * 注意这里使用的insert方式！！！！！！！！！！！！！
     */
    //  c1.insert(c1.begin()+3,100);      //只重载++运算符，list地址不连续，这里就出错了
    auto pt=c1.begin();
    for(size_t i=0;i<6;++i){
        ++pt;
    }
    c1.insert(pt,100);
    for(it=c1.begin();it!=c1.end();++it){
        cout<<*it<<endl;
    }

    //升序排列
    c1.sort();
    for(it=c1.begin();it!=c1.end();++it){
        cout<<*it<<endl;
    }

    //删除相同的数，首先进行排列，然后进行删除
    list<int> a1{1,1,3,3,4,4,7,7,6,0,9,8,5};
    a1.sort();
    a1.unique();
    for(it=a1.begin();it!=a1.end();++it){
        cout<<*it<<endl;
    }
    return 0;
}

