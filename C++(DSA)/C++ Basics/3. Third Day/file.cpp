// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 101; i <=200; i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for (int i = 1; i <=10; i++){
//         cout<<n<<" X "<<i<<" = "<<i*n<<endl;
//     }
//     return 0;
// }

//Power of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,power;
    
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"Enter a power: ";
//     cin>>power;
//     for(int i = 1; i < power; i++){
//         (num = num*num);
//     }
//     cout<<num; 
// }

//Sum of n natural number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,i,sum = 0;
//     cout<<"Enter a number: ";
//     cin>>num;

//     for(i = 1; i<=num; i = i+1){
//         sum = sum+i;
//     }
//     cout<<((n)*(n-1)*((2*n)-1))/6;
// }

//Factorial of a number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     int fact = 1;
//     cout<<"Enter a number: ";
//     cin>>num;

//     for(int i = 1;i<=num;i++){
//         fact = fact*i;
//     }
//     cout<<"The factorial of "<<num<<" is "<<fact;
//     return 0;
// }

//Check whether a number is prime or not
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;

//     if(num%2 !=0 && num%3 !=0 && num%5 !=0 && num%7 !=0){
//         cout<<"The number is prime";
//     }
//     else{
//         cout<<"The number is not prime";
//     }
//     return 0;
// }

//Fibonacci series
#include<iostream>
using namespace std;

int main()
{
    int num,sum;
    
    cout<<"Enter the index of fibonacci series: ";
    cin>>num;

    for(int i = 0; i<num; i++)
    {
        sum = sum +i;
    }
    
    cout<<"The sum of the numbers is: "<<sum;
    
    return 0;
}