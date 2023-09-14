// operator overloading:
#include <iostream>
using namespace std;
class Squre
{
    int length;
    public:
    void setData(int len)
    {
        length = len;
      
    }

    Squre operator++(int)
    {
        Squre box;

        box.length = length++;
        return box;
    }

    int getData()
    {
            return length * length;
    }

};

int main ()
{
        Squre box1, box2;

        box1.setData(2);
        cout << "Box 1 is: " << box1.getData() << endl;

        box1++;
        cout << "Box 2 is: " << box1.getData() << endl;
}