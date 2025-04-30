// #include<iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     int roll_no;
//     string grade;
//     //Function Getter and setter
    
// };

// int main()
// {
//     Student *S = new Student;
// }


//Constructors and Destroyers

// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int acc_no;
//     int balance;

//     public:
//     Customer()
//     {
//         cout<<"Hello Constructor\n";
//     }
// };

// int main(){
//     Customer C1;
// }

// #include<iostream>
// using namespace std;

// class Customer{
//     string name;
//     int *data;

//     public: 

//     Customer(){
//         cout<<"Constructor in Called"<<endl;
//     }
//     ~Customer(){
//         cout<<"Destructor is called"<<endl;
//     }
// };
// int main(){
//     Customer C1;
// };

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_no;
    int balance,age;
    static int total_customers;

    public:
    Customer(string name, int acc_no, int balance,int age){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        this->age = age;
        total_customers++;
    }

    void deposite(int amount){
        if(amount>0){
            balance += amount;
        }
    }

    void withdrawl(int amount){
        if(amount>0){
            balance -= amount;
        }
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customers<<endl;
    }
};
int Customer :: total_customers = 0;

int main(){
    Customer A1("Ronit",1,1000,20);
    Customer A2("Kiddo", 2, 2000,17);
    A1.display();
    A2.display();
}








