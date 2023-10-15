#include<iostream>
using namespace std;
bool ISEven(){
    int n;
    cin>>n;
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    bool x=ISEven();
    if(x){
        cout<<"Even number raa Bammardhi"<<endl;
    }
    else{
        cout<<"Bagavanthuda"<<endl;
    }
}