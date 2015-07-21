#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num);
int main()
{

        for(int i=1;i<=100;i=i+2){
                if(is_prime(i)){
                        cout<<i<<"is prime"<<endl;
                }
                else{
                }
        }
}

bool is_prime(int num)
{
        for(int i=2;i<=sqrt(num);i++){
                if(num%i==0){
                        return false;
                }
        }
        return true;
}

