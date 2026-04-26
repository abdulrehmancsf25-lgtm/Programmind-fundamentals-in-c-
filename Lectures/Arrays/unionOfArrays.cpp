#include<iostream>
#include<vector>
#include<array>
using namespace std ;
int main(){
    array<int,4> arr1 = {1,2,3,5} ;
    array<int, 3> arr2 = {3,5,6} ;
    int m = arr1.size() , n = arr2.size() ;
    vector<int> temp ;
    int i = 0 , j = 0 ;
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i]) ;
            i++ ;
        }
        else if(arr2[j] < arr1[i]){
            temp.push_back(arr2[j]) ;
            j++ ;
        }
        else{
            temp.push_back(arr1[i]) ;
            i++ ; j++ ;
        }
    }
    while(i < m){
        temp.push_back(arr1[i]) ;
        i++ ;
    }
    while(j <n){
        temp.push_back(arr2[j]) ;
        j++ ;
    }

    for(auto i : temp){
        cout << i << " " ;
    }
    return 0 ;
}