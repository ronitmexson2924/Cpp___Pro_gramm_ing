#include<iostream>
using namespace std;

class Human{
    string name;
    int age;

    public:
    void work(){
        cout<<"I am working \n ";
    }
};

class Student : public Human{
    int roll_no, fess;
} 
int main(){

}