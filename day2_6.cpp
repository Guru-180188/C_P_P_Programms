#include<iostream>
using namespace std;

int main(){
	
    char c;
    cin>>c;
    cout<<"the character is "<<c<<endl;
    int c1='a';
    int c2='z';
    int c3='A';
    int c4='Z';
    int c5='0';
    int c6='9';

    if(c>=c1 && c<=c2){
        cout<<"lower case"<<endl;
    }
    else if(c>=c3 && c<=c4){
        cout<<"upper case"<<endl;
    }
    else if(c>=c5 && c<=c6){
        cout<<"numeric case"<<endl;
    }
    else{
        cout<<"orey dikku maalinoda "<<endl;
    }


}
