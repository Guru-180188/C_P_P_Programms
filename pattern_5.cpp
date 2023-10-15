#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

    int i=1;
    int k=1;
    while(i<=row){
        int j=1;
        while(j<=col){
            cout<<k<<" ";
            j=j+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}