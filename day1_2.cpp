#include <iostream>
using namespace std;
int main(){
    int a=-2;
    float f=1.2;
    double d=1.234;
    char c='v';
    bool b=true;
    cout<<"the integer is "<<a<<endl;
    cout<<"the float is "<<f<<endl;
    cout<<"the double is "<<d<<endl;
    cout<<"the character is "<<c<<endl;
    cout<<"the bool is "<<b<<endl;
    int size_i = sizeof(a);
    int size_f = sizeof(f);
    int size_d = sizeof(d);
    int size_c = sizeof(c);
    int size_b = sizeof(b);
    cout<<"the size of a is "<<size_i<<endl;
    cout<<"the size of f is "<<size_f<<endl;
    cout<<"the size of d is "<<size_d<<endl;
    cout<<"the size of c is "<<size_c<<endl;
    cout<<"the size of b is "<<size_b<<endl;
}