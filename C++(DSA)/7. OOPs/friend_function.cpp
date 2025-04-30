// #include<iostream>
// using namespace std;

// class Complex{
//     int a;
//     int b;
//     public:
//     void set_num(int n1, int n2){
//         a = n1;
//         b = n2;
//     }
//     void print_num(){
//         cout<<"The complex number is: "<<a<<"+"<<b<<"i"<<endl;
//     }
//     friend print_sum(Complex o1, Complex o2)
// };
// print_sum(Complex C1, Complex C2){
//     C3.setnumber()
// }
// int main(){
//     Complex C1, C2,C3;
//     C1.set_num(2,4);
//     C2.set_num(9,5);

//     C1.print_num();
//     C2.print_num();

//     C3.print_sum(C1,C2);
// }

//friend Classes

// #include<iostream>
// using namespace std;

// class Complex;  // Forward declaration

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     int sum_Complex(Complex, Complex);
//     int sum_real(Complex, Complex);
// };

// class Complex {
//     int a, b;
//     friend class Calculator;  // Make entire Calculator class a friend

// public:
//     void set_num(int c1, int c2) {
//         a = c1;
//         b = c2;
//     }
    
//     void print_num() {
//         cout << "The Complex number is: " << a << "+" << b << "i" << endl;
//     }
// };

// int Calculator::sum_Complex(Complex o1, Complex o2) {
//     return o1.b + o2.b;
// }

// int Calculator::sum_real(Complex o1, Complex o2) {
//     return o1.a + o2.a;
// }

// int main() {
//     Complex o1, o2;
//     o1.set_num(1, 3);
//     o2.set_num(4, 5);

//     Calculator calc;
//     int sum_real = calc.sum_real(o1, o2);
//     int sum_complex = calc.sum_Complex(o1, o2);

//     cout << "The sum of the two complex numbers is: " << sum_real << "+" << sum_complex << "i" << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

class Y;
class X{
    int data;
    public:
    void set_value(int value){
        data = value;
    }
    friend void add(X, Y); 
};

class Y{
    int num;
    public:
    void set_value(int value){
        num = value;
    }
    friend void add(X, Y); 
};

void add(X o1, Y o2){
    cout<<"Summing of X and Y objects is: "<<o1.data+o2.num;
}
int main(){
    X a1;
    Y b1;

    a1.set_value(3);
    a1.set_value(5);

    add(a1,b1);
    return 0;
}
