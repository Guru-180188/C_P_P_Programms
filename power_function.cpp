#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int x=power();
    cout<<"the result is "<<x<<endl;
    int y=power();
    cout<<"the result is "<<y<<endl;
    int z=power();
    cout<<"the result is "<<z<<endl;
}