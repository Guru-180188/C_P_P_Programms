#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"enterd a number is "<<n<<endl;
    int sum=0;
    int pro=1;
    while(n!=0){
        int digit =n%10;
        sum=sum+digit;
        pro=pro*digit;

        n=n/10;
    }
    cout<<"sum is "<<sum<<endl;
    cout<<"product is "<<pro<<endl;
}
