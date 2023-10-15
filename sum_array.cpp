#include<iostream>
using namespace std;

void sum(int num[],int n){
    int add=0;
    for(int i=0;i<n;i++){
        add=add+num[i];
    }
    cout<<"the sum is "<<add<<endl;
}

int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sum(num,n);
}