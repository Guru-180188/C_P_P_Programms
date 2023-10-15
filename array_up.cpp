#include<iostream>
using namespace std;

void update(int num[],int n){
    num[1]=120;
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;              /*update in array is harm ful bro dhek le ekbar*/
    int num[10];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    update(num,n);
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}