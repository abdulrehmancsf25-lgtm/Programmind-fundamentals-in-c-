#include<iostream>
#include<string>
using namespace std ;
bool check_Palindrome(string s ,int start,  int end ){
        if(start >= end)
        return true ;
    
      if(s[start++] != s[end--])
        return false ;
          
 return check_Palindrome(s , start , end) ;
}
int main(){
           int num ;
           cin >> num ;
            string s = to_string(num) ;
            int size = s.size() ;
          if (check_Palindrome(s ,0 , size-1 ))
          cout << "palindrome" << endl;
          else
          cout << "not palindrome " << endl ;
return  0 ;
}

