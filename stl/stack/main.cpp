/*（1）可用 vector, list, deque来实现
 *（2）缺省情况下，用deque实现
 *    template<classT, class Cont = deque<T> >
               class stack {    …..    }；
 *（3）用 vector和deque实现，比用list实现性能好
 *（4）stack是后进先出的数据结构，
 *（5）只能插入、删除、访问栈顶的元素的操作:
 *    push:插入元素,pop: 弹出元素,top: 返回栈顶元素的引用
 */

/*（1）主要使用stl容器实现栈的操作
 *（2）使用vector分离字符与数字
 *（3）stack是后进先出的数据结构，可以使用vector比较方便实现
 *（4）stack只能插入、删除、访问栈顶的元素的操作:
 *    push:插入元素,pop: 弹出元素,top: 返回栈顶元素的引用
 *（5）vector可以随机遍历元素：
 *    push_back:插入元素,front():读取首元素
 *（6）string转换为数值使用stod()
 *（7）stack要求栈顶操作数据，为LIFO结构，并且不要求随机访问元素，适配器实现可以使用list,vector,deque 容器
 */
#include <iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;
int get_prior_level(const string ch);
int main()
{
    string express;
    string a,b;
    vector<string>str;
    cin>>express;

    //判断输入不为空
    if(express.empty()){
        return -1;
    }

    //处理输入，将输入数字，字符分开
    for(char c:express){
        if((c>='0'&&c<='9')||c=='.'){
            a=a+c;
        }else{
            if(!a.empty()){
                str.push_back(a);
            }
//            b.insert(b.begin(),c);  //字符转字符串
            str.push_back(string("")+c); //直接使用""符号是错误的，应为，直接使用""是一个字符串字面值，相当于const char*，此类型决定了使用哪个+运算符。由于const char*并没有+运算符，因此需要强制类型转换为string，string含有+运算符
            a="";
//            b="";
        }
    }
    //push_back需要检测不为空字符串
    if(!a.empty()){
        str.push_back(a);
    }

    vector<string>exp;    //后缀表达式vector
    stack<string>exp1;    //符号处理栈
    string::size_type i=0;
    //生成后缀表达式
    while(i!=str.size()){
        if(str[i]=="+"|| str[i]=="-" ||str[i]=="*"\
                ||str[i]=="/"||str[i]=="("||str[i]==")"){
            if(exp1.empty()){                 //栈为空时，入栈
                exp1.push(str[i]);
                ++i;
                continue;
            }
            if(get_prior_level(str[i])>get_prior_level(exp1.top())||str[i]=="("){
                exp1.push(str[i]);    //当前符号优先级高，压入栈中
                if(str[i]==")"){      //处理')'符号
                    while(exp1.top()!="("){
                        if(exp1.top()!="("&& exp1.top()!=")"){
                            exp.push_back(exp1.top());  //将栈中除了'('')'符号的其余符号压倒后缀表达式中
                        }
                        exp1.pop();           //将栈中')'符号出栈
                    }
                    exp1.pop();               //将栈中'('符号出栈
                }
            }else{
                while(!exp1.empty()){         //优先级高于或等于当前符号的符号压入后缀表达式中，并且出栈
                    exp.push_back(exp1.top());
                    exp1.pop();
                }
                exp1.push(str[i]);    //当前符号压入栈中
            }
        }else{
            exp.push_back(str[i]);    //数字直接压入后缀表达式中
        }
        ++i;
    }

    //将栈中剩余符号全部压入后缀表达式中
    while(!exp1.empty()){
        exp.push_back(exp1.top());
        exp1.pop();
    }

    i=0;
    double tmp;
    vector<double>result;
    //后缀表达式处理计算结果
    while(i!=exp.size()){
        if(exp[i]=="+" || exp[i]=="-" || exp[i]=="*" || exp[i]=="/"){
            switch (exp[i][0]) {
            case '+':
                tmp=(*(result.end()-2))+(*(result.end()-1));
                result.pop_back();
                result.pop_back();
                result.push_back(tmp);
                break;
            case '-':
                tmp=(*(result.end()-2))-(*(result.end()-1));
                result.pop_back();
                result.pop_back();
                result.push_back(tmp);
                break;
            case '*':
                tmp=(*(result.end()-2))*(*(result.end()-1));
                result.pop_back();
                result.pop_back();
                result.push_back(tmp);
                break;
            case '/':
                tmp=(*(result.end()-2))/(*(result.end()-1));
                result.pop_back();
                result.pop_back();
                result.push_back(tmp);
                break;
            }
        }else{
            result.push_back(stod(exp[i]));
        }
        ++i;
    }
    //栈中唯一的一个数就是所需结果
    cout<<"result:"<<result.front()<<endl;
    return 0;
}

//获取运算符的优先级
int get_prior_level(const string ch)
{
    char a=ch[0];
    switch(a){
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case ')':
        return 3;
    }
    return 1;
}

