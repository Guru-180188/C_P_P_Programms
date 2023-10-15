#include<iostream>
using namespace std;

int main(){
	int a , b, c;
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"a is bigger"<<endl;
		}
		else {
			cout<<"c is bigger"<<endl;
		}
	}
	else {
		if(b>c){
			cout<<"b is bigger"<<endl;
		}
		else {
			cout<<"c is bigger"<<endl;
		}
	}
}
