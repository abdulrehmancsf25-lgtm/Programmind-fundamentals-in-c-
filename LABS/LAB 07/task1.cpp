/* Task 1: Declare an integer array of 20 elements.
 Initialize randomly by 0 and 1 only and print elements in a single line.
 Run a loop and find the max count of consecutive zeros and ones separately.
Sample Run:
1 0 1 0 0 1 1 0 1 0 0 0 1 1 1 0 1 1 1 1 
Maximum consecutive zeros: 3
Maximum consecutive ones: 4

*/
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int arr [20] ;
    for(int i = 0; i < 20; i++) {
        arr [i] = rand() % 2;
        cout << arr[i] ;
    }
    cout << endl ;
    int count = 0 , maxCount = 0 ;
    for(int i = 0 ; i < 20 ; i++){
        if(arr[i] == 1){
            count += 1 ;
            if(count > maxCount){
                maxCount = count ;
            }
        }
        if(arr[i] == 0 )
        count = 0 ;

    }
cout << "Maximum consecutive 1's are : " << maxCount << endl ;

 count = 0 ;
 maxCount = 0 ;
    for(int i = 0 ; i < 20 ; i++){
        if(arr[i] == 0){
            count += 1 ;
            if(count > maxCount){
                maxCount = count ;
            }
        }
        if(arr[i] == 1 )
        count = 0 ;

    }
    cout << "Maximum consecutive 0's are : " << maxCount << endl ;
    return 0;
}