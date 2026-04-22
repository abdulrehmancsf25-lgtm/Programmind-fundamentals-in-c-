#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main(){
    srand(time(0)) ;
    int arr[10] ;
    for(int i = 0 ; i < 10 ; i++){
        arr[i] = rand() % 100 ;
        cout << arr[i] << " " ;
    }
    cout << endl ;
    // SUM
    long long sum = 0 ;

    for(int i = 0 ; i <10 ; i++){
        sum += arr[i];
    }
    double avg = sum/(double)10 ;
    cout << " Average of array is " << avg << endl ;
   
    // Finding minimum element
    int min = INT_MAX ;
    for(int i = 0 ; i< 10 ; i++){
        if(arr[i] < min)
        min = arr[i] ;
    }
    cout << "Minimum element in array is " << min << endl ;
    // Subtracting min value from array elements 
    cout << "After subracting the minimum value from array elements" << endl ;
    for(int i = 0 ; i < 10 ; i++){
        arr[i] -= min ;
        cout << arr[i] << " " ;
    }
    cout << endl ;
    
    // New average 
     long long new_Sum = 0 ;

    for(int i = 0 ; i <10 ; i++){
        new_Sum+= arr[i];
    }
    double new_Avg = new_Sum/(double)10 ;
    cout << " Average of array is " << new_Avg << endl ;
    return 0 ;
}