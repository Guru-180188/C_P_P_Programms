#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"number is "<<n<<endl;

    /*for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans == n){
            cout<<"it's 2 power andi"<<endl;
            break;
        }
        else{
            cout<<"number ki deeniki sambandham ledhu adyaksha"<<endl;
            break;
        }
    }*/
    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans == n){
            cout<<"power of 2"<<endl;
        }
        ans=ans*2;
    }
    
}