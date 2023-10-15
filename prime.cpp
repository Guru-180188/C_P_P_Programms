#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"the entered number is "<<n<<endl;

    bool b=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            b=0;
            break;
        }
    }
    if(b==0){
        cout<<"not prime number"<<endl;
    }
    else{
        cout<<"prime number"<<endl;
    }
}