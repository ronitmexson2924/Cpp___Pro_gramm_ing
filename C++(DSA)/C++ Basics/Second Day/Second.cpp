// #include <iostream>
// using namespace std;

// int main()
// {
//   // int a,b;

//   // cout<<"Enter first number: ";
//   // cin>>a;
//   // cout<<"Enter second number: ";
//   // cin>>b;
//   // cout<<"Sum of the numbers is: "<<a+b;
//   // return 0;

//   //Type Casting
//   int a = 67;
//   char c = 'd';
//   c = a;
//   cout<<c;
// }



//If-else
// #include<iostream>
// using namespace std;

// int main()
// {
  // int package;
  // cin>>package;

  // if (package>10)
  // {
  //   cout<<"Accepted";
  // }
  // else{
  //   cout<<"rejected";
  // }

  // int marks;
  // cin>>marks;
  // if (marks>33)
  // {
  //   cout<<"Pass";
  // }
  // else{
  //   cout<<"Fail";
  // }

  // int a b;
  // cin>>a;
  // cin>>b;
  // if(a>b)
  // cout<<"Yes";
  // else
  // cout<<"No";

  //Check if a number is even or odd
  // int num;

  // cout<<"Enter the number: ";
  // cin>>num;
  // if (num%2==0){
  //   cout<<"Even";
  // }
  // else{
  //   cout<<"Odd";
  // }


  //Voter eligiblity
  // int age;
  // cin>>age;
  // if (age>=18){
  //   cout<<"Adult";
  // }
  // else{
  //   cout<<"Teenager";
  // }

  //Check Vowel or not
  // char a;
  // cout<<"Enter the character in small caps: ";
  // cin>>a;
  // if (a == 'a'){
  //   cout<<"Vowel";
  // }
  // else if (a == 'e'){
  //   cout<<"Vowel";
  // }
  // else if (a == 'i'){
  //   cout<<"Vowel";
  // }
  // else if (a == 'o'){
  //   cout<<"Vowel";
  // }
  // else if (a == 'u'){
  //   cout<<"Vowel";
  // }
  // else{
  //   cout<<"Consonant";
  // }

  //Weekdays
  // int a;
  // cout<<"Enter the day number: ";
  // cin>>a;
  // if(a == 1){
  //   cout<<"Monday";
  // }
  // if(a == 2){
  //   cout<<"Tuesday";
  // }
  // if(a == 3){
  //   cout<<"Wedneday";
  // }
  // if(a == 4){
  //   cout<<"Thursday";
  // }
  // if(a == 5){
  //   cout<<"Friday";
  // }
  // if(a == 6){
  //   cout<<"Saturday";
  // }
  // if(a == 7){
  //   cout<<"Sunday";
  // }
// }

//Loop Concept
#include<iostream>
using namespace std;

int main()
{
  //print square of the given numbers
  // int num;
  // cout<<"Enter the number where we want to print the squares: ";
  // cin>>num;

  // for (int i = 1; i<=num; i+=1)
  // {
  //   cout<<"\n"<<i*i;
  // }

  //Print coder army 10 times
  // char a[500];

  // cout<<"Enter the string: ";
  // cin>>a;

  // for (int i = 0; i <= 10; i+=1)
  // {
  //   cout<<a<<"\n";
  // }

  //Print first n natural numbers
  // int n;

  // cout<<"Enter the value od n: ";
  // cin>>n;

  // for (int i=1; i<=n; i+=1)
  // {
  //   cout<<i<<endl; //instead of "\n" use endl {Both have the same function}
  // }


  //Print all even numbers till a given range
  int n;

  cout<<"Enter the number: ";
  cin>>n;
   for (int i =2; i<=n; i = i+2)
   {
    cout<<i<<endl;
   }
}


