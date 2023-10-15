#include<iostream>
using namespace std;
void reverse(int num[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(num[s],num[e]);
        s++;
        e--;
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
    reverse(num,n);
    printing(num,n);
}