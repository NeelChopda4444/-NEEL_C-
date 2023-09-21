#include <iostream>
#include <string>

using namespace std;

// Base class
class Student 
{
protected:
    string name;
    int rollNumber;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Result : public Student
{
private:
    int marks;
    char grade;

public:
    void getMarks() 
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void calculateGrade() 
    {
        if (marks >= 90)
         {
            grade = 'A';}
         else if (marks >= 80) 
        {
            grade = 'B';
        } 
        else if (marks >= 70) 
        {
            grade = 'C';
        } 
        else if (marks >= 60) 
        {
            grade = 'D';
        } 
        else 
        {
            grade = 'Fail';
        }
    }

    void displayResult() 
    {
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Result result;

    result.getData();
    result.getMarks();
    result.calculateGrade();

    cout << "\nStudent Result:\n";
    result.displayData();
    result.displayResult();

    return 0;
}