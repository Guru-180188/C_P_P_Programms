#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"the number you enterd is "<<n<<endl;

    /*int i=1;
    while(i<=n){
        cout<<i<<endl;
        i=i+1;
    }*/

    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<sum<<endl;
           
}