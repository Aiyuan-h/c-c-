#include <iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
#include <stdio.h>
#include<sstream>
#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )
using namespace std;
string calFraction(string strOperationString);
int main()
{
    string str;
    cin>>str;
    cout << calFraction(str) << endl;
    return 0;
}

string calFraction(string strOperationString){
    int FenZ1=strOperationString[0]-'0';
    int FenZ2=strOperationString[4]-'0';
    int FenM1=strOperationString[2]-'0';
    int FenM2=strOperationString[6]-'0';
    int calDn=FenM1*FenM2;
    int calUp;
    if(strOperationString[3]=='+'){
        calUp=FenZ1*FenM2+FenZ2*FenM1;
        for(int i=2;i<min(calUp,calDn);i++){
            while(calUp%i==0 &&calDn%i==0){
                calUp=calUp/i;
                calDn=calDn/i;
            }
        }
    }
    else if(strOperationString[3]=='-'){
        calUp=FenZ1*FenM2-FenZ2*FenM1;
        for(int i=2;i<min(abs(calUp),abs(calDn));i++){
            while(calUp%i==0 &&calDn%i==0){
                calUp=calUp/i;
                calDn=calDn/i;
            }
        }
    }
    stringstream s1,s2;
    s1<<calUp;s2<<calDn;
    string Up=s1.str();
    string Dn=s2.str();
    string output=Up+"/"+Dn;
    return output;
}

