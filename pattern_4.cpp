#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

    int i=1;
    while(i<=row){
        int j=row;
        while(j>=1){
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}