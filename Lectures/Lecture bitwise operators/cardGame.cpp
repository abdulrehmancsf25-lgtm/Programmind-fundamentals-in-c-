#include<iostream>
using namespace std ;
int main(){
//                  <-- CARD GAME ->
//                        4 TYPES
/* H → Hearts    D → Diamonds     C → Clubs   S → Spades
                        RANKS
2 to 10 → normal numbers
11 → Jack
12 → Queen
13 → King
14 → Ace*/
char  p1t1 , p1t2 ,p1t3 , p2t1 ,p2t2 , p2t3  ;
int  p1r1 , p1r2 , p1r3 , p2r1 , p2r2 , p2r3 ;
int ct1 , ct2 ;
    cout << "\t\t\t\t <---------------- GAME STARTED -------------->" << endl;
//                                <-- PLAYER 2 -->
    cout << "Player 1 turn " << endl ;
    cout << "card1 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p1r1 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p1t1 ;

    cout << "card2 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p1r2 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p1t2 ;

    cout << "card3 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p1r3 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p1t3 ;
//                                 <-- PLAYER 2 TURN -->
    cout << "Player 2 turn " << endl ;
    cout << "card1 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p2r1 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p2t1 ;

    cout << "card2 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p2r2 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p2t2 ;

    cout << "card3 " << endl ;
    cout << "Choose rank between 2 and 14 " << endl ;
    cin >> p2r3 ;
    cout <<"Choose card type H OR D OR C OR S " << endl ;
    cin >> p2t3 ;
    // CONDITION 1
    if((p1t1 == p1t2 == p1t3) && ((p1r2 == p1r1 + 1) && (p1r3 == p1r2 + 1 )) )
    ct1 = 6 ;
     if((p2t1 == p2t2 == p2t3) && ((p2r2 == p2r1 + 1) && (p2r3 == p2r2 + 1 )) )
    ct2 = 6 ;
    //      CONDITION 2
    if((p1r1 == p1r2) && (p1r2 == p1r3))
     ct1 = 5 ;
     if((p2r1 == p2r2) && (p2r2 == p2r3))
     ct2 = 5 ;
//      CONDITION 3
    if((p1r2 == p1r1 + 1) && (p1r3 == p1r2 +1 ))
     ct1 = 4 ;
    if((p2r2 == p2r1 + 1) && (p2r3 == p2r2 +1 ))
    ct2 = 4 ;
//      CONDITION 4 
    if(((p1t1 == p1t2) && (p1t2 == p1t3)) && ((p1r2 != p1r1 + 1) || (p1r3 != p1r2 + 1)))
    ct1 = 3 ;
    if(((p2t1 == p2t2) && (p2t2 == p2t3)) && ((p2r2 != p2r1 + 1) || (p2r3 != p2r2 + 1)))
    ct2 = 3 ;
//      CONDITION 5 
    if((p1r1 == p1r2) || (p1r1 == p1r3) || (p1r2 == p1r3))
    ct1 = 2 ;
    if((p2r1 == p2r2) || (p2r1 == p2r3) || (p2r2 == p2r3))
    ct2 = 2 ;
    // CONDITION 6 
    if(ct1 != 2 )
    ct1 = 1;
    if(ct2 != 2)
    ct2 = 1 ;
//                NOW CASES FOR WIN & DRAW
   if(ct1 > ct2)
   cout << "Player 1 wins " << endl ;
   else  if(ct2 > ct1)
   cout << "Player 2 wins " << endl ;
   // CONDITIONS FOR DRAW 
   if ( (ct1 == 6) && (ct2 == 6)){
       if(p1r3 > p2r3)
       cout << "Player 1 wins " << endl ;
       else if(p2r3 > p1r3 )
       cout << "Player 2 wins " << endl ;
       else
       cout << "Draw " << endl ;
   }
   else if((ct1 == 5) && (ct2 == 5)){
        if(p1r1 > p2r1)
        cout << "Player 1 wins " << endl ;
        else if (p2r1 > p1r1)
        cout << "Player 2 wins" << endl ;
        else
        cout << "Draw " << endl ;
   }
   else if((ct1 == 4 ) && (ct2 == 4)){
    if(p1r3 > p2r3)
       cout << "Player 1 wins " << endl ;
       else if(p2r3 > p1r3 )
       cout << "Player 2 wins " << endl ;
       else
       cout << "Draw " << endl ;
   }
   else if((ct1 == 3) && (ct2 == 3)){
int max1 = -1 ;
       int max2 = -1 ;
    if(p1r1 > max1)
    max1 = p1r1 ;
    if(p1r2 > max1)
    max1 = p1r2 ;
    if(p1r3 > max1)
    max1 = p1r3 ;
    //    PLAYER 2
  if(p2r1 > max2)
    max2 = p2r1 ;
    if(p2r2 > max2)
    max2 = p2r2 ;
    if(p2r3 > max2)
    max2 = p2r3 ;

    if (max1 > max2 )
    cout << "Player 1 wins " << endl ;
   else  if(max2 > max1 )
    cout << "Player 2wins " << endl ;
    else
    cout << "DRAW " << endl ;
   }
   else if ((ct1 == 2 ) && (ct2 == 2)){
    
   }
   // LAST HIGH CARD 
   else{
    
    //    PLAYER 1 
       int max1 = -1 ;
       int max2 = -1 ;
    if(p1r1 > max1)
    max1 = p1r1 ;
    if(p1r2 > max1)
    max1 = p1r2 ;
    if(p1r3 > max1)
    max1 = p1r3 ;
    //    PLAYER 2
  if(p2r1 > max2)
    max2 = p2r1 ;
    if(p2r2 > max2)
    max2 = p2r2 ;
    if(p2r3 > max2)
    max2 = p2r3 ;

    if (max1 > max2 )
    cout << "Player 1 wins " << endl ;
   else  if(max2 > max1 )
    cout << "Player 2wins " << endl ;
    else
    cout << "DRAW " << endl ;
  }
     return 0 ;
} 
