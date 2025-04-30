#include<iostream>
using namespace std;

class Human{
   protected:
   string name;
   int age, weight;
};

class Student : public Human{
    int roll_no;
    int fess;
};

int main()
{
    Student A;
    A.name = "Mullah" 
}