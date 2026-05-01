#include <iostream>
using namespace std;
void game_Start_Display(){
    cout << endl ;
    cout << "******************************************\n";
    cout << "*        TIC-TAC-TOE GAME                *\n";
    cout << "******************************************\n";
    cout << endl ;
}
void display_Win(char player){
     cout << "******************************************\n";
    cout << "*         PLAYER " << player << " WINS!                 *\n";
    cout << "******************************************\n";
}
void display_Draw(){
                     cout << "\n";
    cout << "******************************************\n";
    cout << "*         MATCH DRAW!                    *\n";
    cout << "******************************************\n";
}
void draw(char &a ,char &b ,char &c,char &d ,char &e ,char &f ,char &g ,char &h ,char &i ){
    cout << endl ;
    cout << " " << a<< " | " << b << " | " << c << endl ;
    cout << "---|---|---" << endl ;
    cout << " " << d << " | " << e << " | " << f << endl ;
    cout << "---|---|---"  << endl ;
    cout << " " << g << " | " << h << " | " << i<< endl ;
    cout << endl ;
}
bool check_Win(char &a ,char &b ,char &c,char &d ,char &e ,char &f ,char &g ,char &h ,char &i ){
    if((a == b && b == c)  || (d ==e && e==f ) || (g==h && h== i))
    return  true ;
    else if((a == d && d== g)  || (b ==e && e==h ) || (c==f && f== i))
    return true ;
    else if((a == e && e == i) || (c == e && e == g)) 
    return true ;
    return false ;
}
bool check_Availability(int position , char &a ,char &b ,char &c,char &d ,char &e ,char &f ,char &g ,char &h ,char &i ){
             if(position < 1  || position > 9)
            return false ;
            else if(position == 1  && (a == 'X' || a == 'O'))
            return false ;
            else  if(position == 2  && (b == 'X' || b == 'O'))
             return false ;
            else if (position == 3  && (c == 'X' || c == 'O'))
             return false ;
            else  if(position == 4  && (d == 'X' || d == 'O'))
             return false ;
            else if(position == 5  && (e == 'X' || e == 'O'))
             return false ;
            else if(position == 6  && (f == 'X' || f == 'O'))
             return false ;
            else if(position == 7  && (g == 'X' || g == 'O'))
             return false ;
            else if(position == 8  && (h == 'X' || h == 'O'))
             return false ;
            else if(position == 9 && (i == 'X' || i == 'O'))
             return false ;
            
          return true ;   
}

 void place_Input(char &a ,char &b ,char &c,char &d ,char &e ,char &f ,char &g ,char &h ,char &i , int position , char player){
        if(position == 1 )       a = player;
        else if(position == 2 )  b = player;
        else if(position == 3 )  c = player;
        else if(position == 4 )  d = player;
        else if(position == 5 )  e = player;
        else if(position == 6 )  f = player;
        else if(position == 7 )  g = player;
        else if(position == 8 )  h = player;
        else if(position == 9 )  i = player;

 }
int main() {
             // START DISPLAY
             game_Start_Display() ;
            char a  = '1' ,b = '2',c = '3',d = '4',e = '5',f = '6',g = '7',h = '8',i = '9';
            draw(a,b,c,d,e,f,g,h,i) ; // DISPLAY BOARD 
            int user_Input  , count  = 0 ;
            char player = 'X' ;
            bool gameOver = true ;
            while(gameOver){
                              
                            cout << player << " Player turn " << endl ;
                            cout << "Enter position from 1 to 9 :: ";
                            cin >> user_Input ;
                           // first check if position entered is available or not 
                            if(check_Availability(user_Input ,a,b,c,d,e,f,g,h,i)){
                                place_Input(a,b,c,d,e,f,g,h,i , user_Input , player) ;
                                 draw(a,b,c,d,e,f,g,h,i) ; // display 
                            }
                             else{
                                   cout << "Invalid or taken position! Enter input value again"<< endl ;
                                    continue;
                             }
                            if (check_Win(a,b,c,d,e,f,g,h,i)) {
                                display_Win(player) ;
                                break ;
                            }
                            if(player == 'X')
                            player = 'O' ;
                            else
                            player = 'X' ;
                            count ++ ;
                            if(count == 9 ){
                                            cout << " Math draw " << endl ;
                                            break ;
                            }
            }
    return 0;
}