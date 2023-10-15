#include<iostream>
using namespace std;
void unique(int num[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^num[i];
    }
    cout<<"the unique element is "<<ans<<endl;
}
int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    unique(num,n);
}