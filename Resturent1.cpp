#include <iostream>

using namespace std;

char name[50];
int number, quantity ,choice,choice2;
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
    cin>> number;
    while (true)
    {
        cout << "Hello, " << name << "! What would you like to do?" << endl;
        cout << "1. View Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3.Exit " << endl;
        
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
    while (true)
    {
                cout <<"Press 1 for Burger"<<endl;
                cout <<"Press 2 for Pizza"<<endl;
                cout <<"Press 3 for Pasta"<<endl;
                cout <<"Press 4 for Maggie"<<endl;
                cout <<"Press 5 for Frenky"<<endl;
                cout <<"Press 6 for Wrap"<<endl;

                cout << "Plz Enter Your Chioce";
                cin >>choice2;
                
            switch(choice2)
            {
                cout <<"What Do You Want To Order Plz Select It:-";
                case 1:
                    cout <<"1. "<< endl <<"Burger";
                    cin >> quantity;
                    total += quantity * 50;
                    break;
                case 2:
                    cout <<"1. "<< endl <<"Pizza";
                    cin >> quantity;
                    total += quantity * 80;
                    break;   
                case 3:
                    cout <<"1. "<< endl <<"Pasta";
                    cin >> quantity;
                    total += quantity * 65;
                    break;
                case 4:
                    cout <<"1. "<< endl <<"Burger";
                    cin >> quantity;
                    total += quantity * 40;
                    break;
                case 5:
                    cout <<"1. "<< endl <<"Frenky";
                    cin >> quantity;
                    total += quantity * 80;
                    break;
                case 6:
                    cout <<"1. "<< endl <<"Wrap";
                    cin >> quantity;
                    total += quantity * 115;
                    break;
            }
    }
            break;       
        case 3:
                bill(); 
                        cout <<" \tThankyou For Giving Us A Chance To Serve You "<<endl;
                      cout <<" \tHave A Nice Day "<<endl;
            
            return 0;    
        default:
                cout << "You Are Entering Wrong Choice!!";
       
        }

    }
}
