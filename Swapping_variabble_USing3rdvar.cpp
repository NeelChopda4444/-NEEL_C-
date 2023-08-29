#include <iostream>

using namespace std;

int main()
 {  
   
    int a, b,c;

    
    cout << "Enter the value of a:"; 
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

      cout << "Before swapping, a =" << a << " and b =" << b;

   
    c = a;
    a = b;
    b = c;

    cout << "\nAfter swapping, a = " << a << " and b = " << b; 
    return 0;
}