#include<iostream>
using namespace std;

bool search(int num[],int n,int key){
    for(int i=0;i<n;i++){
        if(key == num[i]){
            return 1;
        }   
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    cout<<"the key is "<<key<<endl;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int x=search(num,n,key);
    if(x==1){
        cout<<"it's present in list bro"<<endl;
    }
    else{
        cout<<"daaam dooo it brooh"<<endl;
    }
}