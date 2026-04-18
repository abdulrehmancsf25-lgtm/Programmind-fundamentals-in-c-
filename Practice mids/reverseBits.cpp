/*
#include <iostream>
using namespace std;

unsigned int reverseBits(unsigned int num) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;          // make room on the right
        result |= (num & 1);   // drop LSB of num into result
        num >>= 1;             // shift num right
    }
    return result;
}

int main() {
    unsigned int n = 5;   // 0000...0101
    cout << reverseBits(n);  // 1010...0000 = 2684354560
}*/
#include <iostream>
using namespace std;

int nextHigherSameBits(int n) {

    // Step 1: find rightmost set bit
    int rightmostSet = n & (-n);

    // Step 2: find rightmost non-trailing zero
    // (the 0 just left of the rightmost 1-block)
    int nextHigherBit = n + rightmostSet;

    // Step 3: isolate the bits that got "consumed" in the addition
    int consumed = n ^ nextHigherBit;

    // Step 4: right-align them and remove the 2 bits accounted
    // for by the pivot flip (divide by rightmostSet, then >> 2)
    consumed = (consumed / rightmostSet) >> 2;

    return nextHigherBit | consumed;
}

int main() {
    int n = 6;   // 1100 → answer should be 17 (10001)? No: 10001 has 2 set bits ✓
    cout << nextHigherSameBits(n);  // 17
}
