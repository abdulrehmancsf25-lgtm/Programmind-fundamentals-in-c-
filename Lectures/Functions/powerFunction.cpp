#include<iostream>
using namespace std ;
long long power (int base , int exponant){
    long long ans  = 1 ;
  while(exponant != 0){
  ans *= base ;
   exponant -= 1 ;
  }
  return ans ;
}
void  given(int(&arr)[] , int size  ){
     
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] ;
    }

}
bool print(){
    return 34 ;
}
int arrayof(){
    int arr[] = {1,2,4} ;
   // return arr ;
   *(arr + 2) = 3 ;
   return arr[2] ;
}
int main(){
    int arr []= {1,2,3} ;
    int base , exponant ;
  //  cin >> base >> exponant ;
   // cout << power(base , exponant) ;
     given(arr , 3) ;
     cout << endl; 
    cout << print() << endl ;
    cout << arrayof() ;
    return 0 ;
}