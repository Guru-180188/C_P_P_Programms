#include<iostream>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    cout<<"the amount is "<<amount<<endl;
    int T;
    int H;
    int F;
    int TW;
    int TE;
    switch(amount){
        case(amount>=1000):
            T=amount/1000;
            amount=amount%1000;
            cout<<"the no of thousands are "<<T<<endl;
            break; 
        case(amount>=100):
            H=amount/100;
            amount=amount%100;
            cout<<"the no of thousands are "<<H<<endl;
            break; 
        case(amount>=50):
            F=amount/50;
            amount=amount%50;
            cout<<"the no of thousands are "<<F<<endl;
            break; 
        case(amount>=20):
            TW=amount/20;
            amount=amount%20;
            cout<<"the no of thousands are "<<TW<<endl;
            break; 
        case(amount>=10):
            TE=amount/10;
            amount=amount%10;
            cout<<"the no of thousands are "<<TE<<endl;
            break;
        default:
            cout<<"paisa nahi ek rupe dhe"<<endl;                      
    }

}