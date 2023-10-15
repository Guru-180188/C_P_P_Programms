#include<iostream>
using namespace std;
int factorial(){
    int n;
    cin>>n;
    cout<<"number is "<<n<<endl;;

    int fact=1;
    if(n ==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}    
int main(){
    int f=factorial();
    cout<<"factorial is "<<f<<endl;
}