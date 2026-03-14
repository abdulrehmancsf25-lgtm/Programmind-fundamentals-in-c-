#include<iostream>
#include<cstring>
using namespace std;
//strlen	Returns the length of the string (excluding the null terminator \0).
//strcpy	Copies one character array into another.
// strncpy	Copies a specified number of characters to a destination.
//strcat	Appends (concatenates) one string to the end of another.
//strcmp	Compares two strings (returns 0 if they are identical).
//strchr    Locates the first occurrence of a character in a string.
//strstr    Locates the first occurrence of a substring within another string
int main(){
/*char ch[]  = {'a','b','c','\0'};
cout << strlen(ch) << endl;

char sr[] ="" ;
strcpy(sr,ch);
cout << sr << endl;

char ft[6] ;
strncpy(ft,ch,2) ;
cout << ft << endl;
//char ch[] = { 'a','b','c','\0'};
//char sr[] = {'s', 't' ,'r' ,'\0'};
//strcat(ch,sr);
//cout << ch << endl;
char ar[] ="abcd";
char st[] = "abc";
cout << strcmp(ar,st) << endl;
cout << strchr(ar,'b') << endl;
char* p =strchr(ar,'b');
//cout <<  p - ar<< endl;
if(p){
    cout << "exist" <<endl;
}
else{
    cout << "not found"<< endl ;
}
//     about -> Strstr()
char it[] = "I live in skp Pakistan";
char in[] = "skp";
char* p = strstr(it , in );
if(p){
    cout << p << endl;
}
else{
    cout << "Not Found" << endl;
}
cout << "Sub string starts at index "<< p - it <<endl;
char *o = strchr(it , '\0') ;
cout  << o - it << endl;*/
char arr[] = "I live in sheihkupura punjab Pakistan";
    // strtok(arr," ");      OR 
    char * opp = strtok(arr," ");
    int count = 0;
    while(opp !=NULL){
        cout << opp << endl;
        count++;
           opp = strtok(NULL," ");
    }
     cout << count <<endl;
    return 0;
}
