#include <iostream>
#include <vector> //包含vector
#include <algorithm>
using namespace std;

int main()
{
    cout<<"---------vector test---------"<<endl;
    vector <int> v;

    //定义一个vector
    vector <int> vect;
    vector <int> vect1(12);   //12个int类型的元素，每个元素的初始值均为0
    vector <int> vect2(12,9); //12个int，初始值为9
    vector <int> vect3(12,9);
    vector <int> vect4(vect3);


    //定义迭代器iterator
    vector <int>::iterator iter1=vect.begin();//起始地址，闭区间
    vector <int>::iterator iter_end1=vect.end();//结束位置，为开区间，最后一个元素的后一个位置，两个地址都是指针类型

    vect.assign(vect2.begin(),vect2.end()); //对vector对象进行了插入操作，进而迭代器失效！因为存储空间被重新分配了，vector容器是一个动态数组
    iter1=vect.begin();                     //这里需要重新定位迭代器
    iter_end1=vect.end();
    for(;iter1!=iter_end1;++iter1){
        cout<<*iter1<<endl;
    }

    cout<<"---------vector vect4 init---------"<<endl;
    vector <int>::iterator it;
    for(it=vect4.begin();it!=vect4.end();++it){
        cout<<*it<<endl;
    }

    cout<<"---------vector vect1 init---------"<<endl;
    vector <int>::iterator itt;
    for(itt=vect1.begin();itt!=vect1.end();++itt){
        cout<<*itt<<endl;
    }

    cout<<"---------vector vt init---------"<<endl;
    //使用数组初始化vector
    int a []={0,2,4,5,8,4,9,10};
    //vector <数据类型> <容器名> (<开始地址>,<结束地址的下一个地址>).执行后vt中的元素为2，4，5
    vector <int> vt(a+1,a+4);
    //在尾部压入3个值,不支持push_front,但是deque支持
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);

    //定义迭代器iterator
    vector <int>::iterator iter=vt.begin();//起始地址，闭区间
    vector <int>::iterator iter_end=vt.end();//结束位置，为开区间，最后一个元素的后一个位置，两个地址都是指针类型

    //遍历vt
    for(;iter!=iter_end;++iter){
        cout<<*iter<<endl;
    }

    //弹出一个元素 不支持pop_front，但是deque支持
    vt.pop_back();

    //已下两行宠幸获得起始和结尾地址
    iter=vt.begin();
    iter_end=vt.end();
    cout<<"---------executed pop_back---------"<<endl;
    for(;iter!=iter_end;++iter){
        cout<<*iter<<endl;
    }

    //插入元素
    cout<<"---------insert into---------"<<endl;
    //插入格式：vector.insert(<起始地址>,<插入的数量>,<元素值>);如果插入的数量为1，则第二个参数可以被省略
    vt.insert(vt.begin()+1,3,9);
    iter=vt.begin();
    iter_end=vt.end();
    for(;iter!=iter_end;++iter){
        cout<<*iter<<endl;
    }

    //删除的元素
    cout<<"---------erase---------"<<endl;
    //删除格式1为：vector.erase(<删除元素的地址>)
    //删除格式2为：vector.erase(<删除元素的起始地址>，<终止地址>
    iter=vt.begin();
    iter_end=vt.end();
    vt.erase(iter+1);
    iter_end=vt.end();            //如果不加这一行的话一会发现输出的值仍旧为未删除
    for(;iter!=iter_end;++iter){  //之前的值，这可以说明删除操作只是指针的移动，
        cout<<*iter<<endl;        //实际数据仍旧存在于内存中，注意其他操作也是如此
    }


    //删除偶数元素，复制奇数元素
    vector <int> vi={0,1,2,3,4,5,6,7,8,9};  //初始化列表的方式初始化容器，属于c++新特征，.pro中加入CONFIG += c++11
    auto pt=vi.begin();                     //g++ 编译需加参数-std=c++11
    while(pt!=vi.end()){           //下面进行插入删除操作时，迭代器失效，需不停更新vi.end()
        if(*pt%2){
            pt=vi.insert(pt,*pt);  //给定位置之前插入新元素返回指向新插入元素的迭代器
            pt+=2;                 //需要递增两次，越过新添加的元素和正在处理的元素，指向下一个未处理的元素
        }else{
            vi.erase(pt);          //删除元素，返回的迭代器已经指向序列的下一个元素
        }
    }
    for(pt=vi.begin();pt!=vi.end();++pt){
        cout<<*pt<<endl;
    }
/*equal_to<Type>、not_equal_to<Type>、greater<Type>、greater_equal<Type>、less<Type>、less_equal<Type>*/
    sort(vi.begin(),vi.end(),greater<int>()); //greater<type>()从大到小排序
    for(pt=vi.begin();pt!=vi.end();++pt){     //less<type>()从小到大排序
        cout<<*pt<<endl;
    }

    //循环遍历数据(使用逆向迭代器)
    vector<int>::reverse_iterator itr; //定义遍历迭代器
    for(itr=vi.rbegin();itr!=vi.rend();++itr){
        cout<<*itr<<endl;
    }
    return 0;
}

