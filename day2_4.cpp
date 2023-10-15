#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	cout<<n<<endl;

	if(n>0){
		cout<<"it's a positive value"<<endl;
	}
	else{
        if(n<0){
		    cout<<"negative value"<<endl;
	    }
        else{
            cout<<"n is zero"<<endl;
        }
    }    
}
