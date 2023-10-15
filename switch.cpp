#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"entered number is "<<n<<endl;

    switch(n){
        case 1:
            cout<<"entered number is one"<<endl;
            /* continue;  message: "a continue statement may only be used within a loop */
        case 2:
            cout<<"entered number is two"<<endl;
            break;
        default:
            cout<<"abbs sai ram"<<endl;    
    }
}