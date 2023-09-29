#include <iostream>

using namespace std;

class Number
{
    protected :

    int number;

    public :

    void getData()
    {
        cout <<"Enter Number : " ;
        cin >> number;
    }
};

class Fectorial : protected Number
{
    long long fact = 1;

    public :

    void setData()
    {
        getData();

        for (long long  a = 1; a <= number; a++)
        {
            fact = fact * a;
        }
        
        cout <<"Fectorial Number :"<< number << '!' << '=' << fact << endl;
    }
};

int main()
{
    Fectorial F;

    F.setData();
}