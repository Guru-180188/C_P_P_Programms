#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "entered number is " << n << endl;
    int ans = 0;
    int i = 0;
    
    while (n != 0) {
        int digit = n & 1;
        ans = ((digit * pow(10,i)) + ans);  // Fix the order of appending digits
        n = n >> 1;
        i++;
    }
    
    cout << "Binary number is " << ans << endl;
}

