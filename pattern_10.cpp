#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

    int i=0;
    while(i<row){
        int j=1;
        while(j<=col){
            char k='A'+i;
            cout<<k<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}