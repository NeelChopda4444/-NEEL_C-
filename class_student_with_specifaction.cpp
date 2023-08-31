#include <iostream>

using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng, maths, sci, total;

    float ctotal()
    {
        return eng + maths + sci;
    }

    public:
    void takedata()
    {
        cout << "Enter Student No. :-";
        cin >> admno;
        cout << "Enter Student Name :-";
        cin >> sname;
        cout << "Enter Student English Marks :-";
        cin >> eng;
        cout << "Enter Student Maths Marks :-";
        cin >> maths;
        cout << "Enter Student Science Marks :-";
        cin >> sci;

        total = ctotal();
    }

    void showdata()
    {
        cout <<"\n Student No is "<< admno;
        cout <<"\n Student Name is "<<sname;
        cout <<"\nEnglish\tMaths\tScience\tTotal";
        cout <<"\n" << eng << "\t" << maths << "\t" << sci << "\t" << total;
    }
};

int main()
{
    student stu; //stu is student class object

    stu.takedata();
    stu.showdata();
    
    return 0;

}