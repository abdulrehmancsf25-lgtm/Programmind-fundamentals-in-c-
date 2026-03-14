#include<iostream>
#include<cmath>
using namespace std;
/*long long decToBin(int n) {
    long long ans = 0;
    int i = 0;

    // Use unsigned to handle the negative bit pattern automatically
    unsigned int num = (unsigned int)n;

    // We limit to 10 bits because long long can only hold ~19 decimal digits
    // A 32-bit binary number is too large to store in a long long 'ans'
    while (num > 0 && i < 15) { 
        int bit = num & 1;
        ans = ans + (bit * pow(10, i));
        num = num >> 1;
        i++;
    }

    return ans;
}*/
int main(){
  
  //  cout << decToBin(-6);
  unsigned int a = -6 ;
  cout << a ;
    return 0;
}