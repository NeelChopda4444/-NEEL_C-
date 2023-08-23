#include <iostream>

using namespace std;

int main() {
    
    int number1, number2;
    
    cout << "Enter the first number: ";
    cin >> number1;
    
    cout << "Enter the second number: ";
    cin >> number2;

    
    int small;
    if (number1 < number2)
     {
        small = number1;
     }
     else
      {
        small = number2;
      }
    cout << "The small number is: " << small ;


}