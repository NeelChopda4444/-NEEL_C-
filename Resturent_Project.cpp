#include <iostream>
using namespace std;

char name[50];
int number,quantity ,choice;
float total = 0;
void order()
{
    total += quantity;
    cout<< "Order Has Placed Sucessfully" ;
};

void bill()
{
           total += quantity;
           cout <<"Your Bill Is RS:- "<< total<<endl;
    
};

int main()
{
    cout << "Welcome To Our Restaurant!" << endl;
    
    cout << " Enter Your Name:- ";
    cin >> name;
    cout << "Enter Your Mobile Number:- ";
    cin >> number;
    while (true)
    {
        cout << "Hello, " << name << "! What would you like to do?" << endl;
        cout << "1. View Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3.bill " << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "1. Burger - Rs 50" << endl;
            cout << "2. Pizza - Rs 80" << endl;
            cout << "3. Pasta - Rs 65" << endl;
            cout << "4. Maggi - Rs 40" << endl;
            cout << "5. Frenky - Rs 80" << endl;
            cout << "6. Wrap - Rs 115" << endl;
            break;
        case 2:
            cout << "Enter the quantity for each item:" << endl;
            cout << "Burger: "; 
            cin >> quantity;
            total += quantity * 50;
            cout << "Pizza: ";
            cin >> quantity;
            total += quantity * 80;
            cout << "Pasta: ";
            cin >> quantity;
            total += quantity * 65;
            cout << "Maggi: ";
            cin >> quantity;
            total += quantity * 40;
            cout << "Frenky: ";
            cin >> quantity;
            total += quantity * 80;
            cout << "Wrap: ";
            cin >> quantity;
            total += quantity * 115;
            cout << "Order Has Placed Sucessfully" << endl;
            break;       
        case 3:
                bill(); 
            break;
        case 4:
             cout <<" \tThankyou For Giving Us A Chance To Serve You "<<endl;
             cout <<" \tHave A Nice Day "<<endl;
            return 0;    
        default:
                cout << "You Are Entering Wrong Choice!!";
       
        }

    }
}
