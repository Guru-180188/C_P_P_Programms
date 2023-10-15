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
        char ch='A'+row-i;
        while(j<=i){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}