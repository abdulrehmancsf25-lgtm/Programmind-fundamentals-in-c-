#include<iostream>
#include<vector>
using namespace std ;
int main(){
              int t ;
              cin >> t ;
              while(t--){
      int num ;
      cin >> num ;
      vector<int> arr ;
      int divisor = 10 , count = 0 ;
      while(num != 0){
        int digit = num % divisor ;
        if(digit != 0){
           arr.push_back(digit) ;
           count++ ;  
        }
        num  -= digit ;
        divisor *= 10 ;
           
      }
      cout << count << endl ;
      for(int i = arr.size() -1 ; i >= 0 ; i--)
      cout << arr[i] << " " ;
    }
    return 0 ;
}