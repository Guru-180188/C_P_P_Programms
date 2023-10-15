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
        int val=i-1;
        while(j<=i){
            char ch=('A'+val-1);
            cout<<ch<<" ";
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;
    }
}