#include <iostream>

using namespace std;

int main() 
{
   int phy,mat,che,total,marks;
    
    cout <<"Plz Enter Maths Marks:";
    cin >> mat ;
    cout <<"Plz Enter Physics Marks:";
    cin >> phy ;
    cout <<"Plz Enter Chemistry Marks:";
    cin >> che ;
    total=mat+phy+che;
    cout << "Your total marks is " << total;
    cout << "\nyour percentage is " << total/3;

    marks=total/3;
    
    if (marks >= 33)
     {
       cout << "\nThe student is PASS"; 
     } else
      {
       cout << " the student is FAIL";
     }

    
}