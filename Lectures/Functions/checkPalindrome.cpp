#include<iostream>
#include<string>
using namespace std ;
bool check_Palindrome(int num){
         string s = to_string(num) ;
         for(int i = 0 , j = s.size() -1 ; i < j ; i++ ,j--){
            if(s[i] != s[j])
          return false ;
         }
         return true ;
}
int main(){
           int num ;
           cin >> num ;
          if (check_Palindrome(num))
          cout << "palindrome" << endl;
          else
          cout << "not palindrome " << endl ;
return  0 ;
}

