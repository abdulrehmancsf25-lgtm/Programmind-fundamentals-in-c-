#include<iostream>
using namespace std ;
// return type ;
// function name 
// parameters 
 // function body 

 // pass by reference 
 // pass by value 
 //int getSum(int num1 , int num2){

  //   int ans = num1 + num2 ;
  //   num1 = 4 , num2 = 7 ;
  //return ans ;
 //}
  bool isEven(int num){
      if(num & 1 )
    return false ;
        
    return true  ;  
  }
 
  int getSum(float num1 , float num2 ){
    return num1 + num2 ;
  }

int minimun_Value(int nums[] ,int n ){
    int min = INT_MAX ;
    for(int i = 0 ; i < n ;i++){
        if(nums[i] < min)
        min = nums[i] ;
    }
    return min ;
}


int main(){
 //   int x = 3 , y = 4  ;
  //  cout << isEven(x )  << endl ;
 //   cout << getSum(3.3 , 5.5) ;
  
 int arr[] = { 1,4,-5,3,45,86,75443} ;
 int size = sizeof(arr) / 4 ;
 cout << minimun_Value(arr , size) ;
    return 0 ;
}