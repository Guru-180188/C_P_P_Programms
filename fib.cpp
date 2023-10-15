#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<" enterd value is "<<n<<endl;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int nextnum=0;
    for(int i=1;i<=n;i++){
        nextnum=a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
}