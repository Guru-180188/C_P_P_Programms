#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

    int i=1;
    while(i<=row){
        int j=1;
        while(j<=col){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}