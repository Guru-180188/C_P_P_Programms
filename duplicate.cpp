#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[100];
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<num.size();i++){
        ans=ans^num[i];
    }
    for(int i=1;i<num.size();i++){
        ans=ans^i;
    }
    cout<<"the duplicate is "<<ans;
}