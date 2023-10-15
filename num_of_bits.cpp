#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"enterd number is "<<n<<endl;
    int count=0;
    while(n!=0){
        if(n&1){
            count=count+1;
        }
        n=n>>1;
    }
    cout<<"the no of ones is "<<count<<endl;
}