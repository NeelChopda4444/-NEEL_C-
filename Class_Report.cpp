#include<iostream>
using namespace std;

class Report{

    int admo;
    char name[20];
    float marks[5],totalmarks,average;
    

 
int Getavg()
{

    average=totalmarks/5;
    return average;
}

public:

void Readingfo()
{   
    cout<<"Enter adno=";
    cin>>admo;
    
    cout<<"Enter Name:";
    cin>>name;
    
    cout<<"Enter 5 Subject Marks:";
    
    for(int i=0;i<5;i++)
      {
          cin>>marks[i];
          
          totalmarks=totalmarks+marks[i];
      }
      
      Getavg();
}

void Displayinfo()
{
    cout<<"\nADNO is:"<<admo;
    cout<<"\nName is:"<<name;
    cout<<"\nAverage Marks Is="<<average;
}

};

int main()
{
    Report marksavg;
    
    marksavg.Readingfo();
    marksavg.Displayinfo();
}