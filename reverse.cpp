#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"entered number is "<<n;

    int ans=0;
    int i=0;
    while(n != 0){
        int bit=n%10;
        ans=(ans*10) +bit;
        n=n/10;
        i++;
    }
    cout<<"reversed number is "<<ans<<endl;
}
