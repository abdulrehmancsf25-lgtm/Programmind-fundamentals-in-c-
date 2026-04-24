#include<iostream>
#include<array>
#include<vector>
using namespace std ;
array<int, 10> getArray(){
    return {0,1,2,3,4,5,6,7,8,9} ;
}
vector<int> getVector(){
       vector<int> irr = {0};
       return irr ;
}
int main(){
    
    array<int , 10 > arr = getArray() ;
    for(auto i : arr)
    cout << i << " " ;
    cout << endl ;
    vector<int> opp = getVector() ;
    for(auto i : opp)
    cout << i << " " ;
    
  
    return 0 ;
}