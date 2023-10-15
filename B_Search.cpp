#include<iostream>
using namespace std;

int binary_search(int num[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(num[mid] == key){
            return mid;
        }
        else if(key>num[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int key;
    cin>>key;
    cout<<"the entered key is "<<key<<endl;
    int x=binary_search(num,n,key);
    cout<<"the element "<<key<<" is "<<x<<endl;
}