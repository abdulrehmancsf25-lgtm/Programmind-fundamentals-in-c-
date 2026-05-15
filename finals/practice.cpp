#include <iostream>
using namespace std;
int main() {
             int arr[] = {58, 50, 49, 12, 97 }, sum = 0 ;
             int size = sizeof(arr)/4 ;
             for(int i = 0 ; i < size ; i++){
                 if(arr[i] >= 95)
                  arr[i] = 100 ;
                  else if(arr[i] >= 50 )
                      arr[i] += 5 ;
                sum += arr[i] ;
             }
             double  avg = (double)sum / size ;
             cout << " Avg is : " << avg ;
    return 0;
}