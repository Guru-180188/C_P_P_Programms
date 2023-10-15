#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char op;
    cin>>op;

    switch(op){
        case '+':
            cout<<"the sum od a and b is "<<a+b<<endl;
            break;    
        case '-':
            cout<<"the sub od a and b is "<<a-b<<endl;
            break;
        case '*':
            cout<<"the mul od a and b is "<<a*b<<endl;
            break; 
        case '/':
            cout<<"the div od a and b is "<<a/b<<endl;
            break;
        default:
            cout<<"pora chanakay"<<endl;            
        }
}