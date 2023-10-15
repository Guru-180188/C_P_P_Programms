#include<iostream>
using namespace std;
void alter_swap(int num[],int n){
    int i=0;
    int j=1;
    while(i<n && j<n){
        //swap(num[i],num[j]);
        int a=num[i];
        num[i]=num[j];
        num[j]=a;
        i=i+2;
        j=j+2;
    }
}
void printing(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    alter_swap(num,n);
    printing(num,n);
}