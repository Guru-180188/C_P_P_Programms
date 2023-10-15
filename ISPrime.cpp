#include<iostream>
using namespace std;
bool ISPrime(){
    int n;
    cin>>n;
    if(n==2){
        return 1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    bool y=ISPrime();
    if(y==1){
        cout<<"idhi prime pillada"<<endl;
    }
    else{
        cout<<"em chepthav cheppu"<<endl;
    }
}