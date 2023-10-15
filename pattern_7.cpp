#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        int val=row;
        while(col<=row){
            cout<<val<<" ";
            col=col+1;
            val=val+1;
        }
        cout<<endl;
        row=row+1;
    }
}