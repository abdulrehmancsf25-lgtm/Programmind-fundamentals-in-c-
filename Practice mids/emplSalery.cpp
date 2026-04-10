#include<iostream>
using namespace std ;
int main(){
    int base_Salary , performance_Score ,experience ,expBonus ,performance_Bonus , tax ;
    cout << "Enter the base salary  " ;
    cin >> base_Salary ;
    cout << "enter the performance score  " ;
    cin >> performance_Score ;
    cout << "enter the employee experience  " ;
    cin >> experience ;

    // EXPERIENCE BONUS 
    if(experience >=0 && experience <=4)
    expBonus = 0 ;
    else if (experience >=5 && experience <= 10)
    expBonus = 0.1 * base_Salary ;
    else if ( experience >= 11 && experience <= 15)
    expBonus = 0.15 * base_Salary ;
    else if (experience >= 16)
    expBonus = 0.20 * base_Salary ;
 
    // PERFORMANCE BONUS 
    if(performance_Score >= 80 && performance_Score <= 100)
    performance_Bonus = 0.10 * base_Salary ;
    else if (performance_Score >= 60 && performance_Score <= 79)
    performance_Bonus = 0.05 * base_Salary ;
    else if ( performance_Score < 60)
    performance_Bonus = 0 ;

    // TAX ;
    int total_Salary = base_Salary + performance_Bonus + expBonus ;
   if(total_Salary > 50000)
   tax = 0.10 * total_Salary ;
   else tax = 0 ;
   cout << total_Salary - tax ;

    return 0 ;
}