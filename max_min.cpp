#include<iostream>
using namespace std;
int GetMin(int num[],int n){
    int min =INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int GetMax(int num[],int n){
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    cout<<"size is "<<n<<endl;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"the maximum number is "<<GetMax(num[],n)<<endl;
    cout<<"the minimum number is "<<GetMin(num[],n)<<endl;

}