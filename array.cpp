#include<iostream>
using namespace std;

int main(){
    int a[3];
    cout<<"1 st array "<<a[0]<<endl;
    int a_1[3]={0};
    cout<<"2 st array "<<a_1[0]<<endl;
    int a_2[3]={1,2};
    cout<<"3 st array "<<a_2[0]<<endl;
    int b[12]={0};
    for(int i=0;i<=12;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int c[12]={1};
    for(int i=0;i<=12;i++){
        cout<<c[i]<<" ";
    }
    char d[3]={'a','b','c'};
    for(int i=0;i<3;i++){
        cout<<d[i]<<" ";
    }
}