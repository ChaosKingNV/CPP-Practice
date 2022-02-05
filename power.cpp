#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Person
{
   char Name[20];
   int Age;
public:
  void getData()
  {
    cout<<"Enter Person Name:";
    gets(Name);
    cout<<"Enter Person Age:";
    cin>>Age;
  }
  void putData()
  {
   cout<<"\n\nDetails About Eldest Person as follows:";
   cout<<"\nName="<<Name<<"\nAge="<<Age;
  }
  Person &Compare(Person &p1)
  {
   if(p1.Age>this->Age)
   return p1;
   return *this;
  }
};



void main()
{
  clrscr(); Person x,y,z;
  x.getData();
  y.getData();
  z=x.Compare(y);
  z.putData();
  getch();
}