//WHILE LOOP

//Multiplication table
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int i = 1;
//     while(i<=10){
//         cout<<num<<" X "<<i<<" = "<<num*i;
//         cout<<endl;
//         i++;
//     }
// }

//Printing factors of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int i = 1;
//     while(i<=num){
//         if (num%i == 0){
//             cout<<i<<" ";
//         }
//         i++;
//     }
// }

//Printing even numbers
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int i = 0;
//     while(i<=num){
//         if (num%2 == 0){
//             cout<<i<<" ";
//         }
//         else{
//             num -= 1;
//             cout<<i<<" ";
//         }
//         i+= 2;
//     }
// }
//Alternate 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int i = 0;
//     while(i<=num){
//         if (i%2 == 0){
//             cout<<i<<" ";
//         }
//         i++;
//     }
// }

// //Do-While Loop
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while(i<=10);
// }

// //Sum of n natural numbers
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int sum = 0;
//     int i = 1;
//     do{
//         sum = sum+i;
//         i++;
//     }while(i<=num);
//     cout<<"The sum of the numbers is: "<<sum;
// }

// //Switch statement
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num)
        {
            case 1:
                cout<<"Monday";
                break;
            case 2:
                cout<<"Tuesday";
                break;
            case 3:
                cout<<"Wednesday";
                break;
            case 4:
                cout<<"Thursday";
                break;
            case 5:
                cout<<"Friday";
                break;
            case 6:
                cout<<"Saturday";
                break;
            case 7:
                cout<<"Sunday";
                break;
            default:
                cout<<"Invalid value";
                break;
        }
}

