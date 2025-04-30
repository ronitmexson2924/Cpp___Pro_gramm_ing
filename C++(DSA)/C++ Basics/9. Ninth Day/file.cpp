//Hard Problems
//1. Convert small caps ts large caps
// #include<iostream>
// using namespace std;
// char convert(char a){
//     char val;
//     val = a - 'a' + 'A';
//     return val;
// }
// int main(){
//     char A;
//     cout<<"Enter a character: ";
//     cin>>A;
//     cout<<convert(A);
// }

//Armstrong number
// #include<iostream>
// using namespace std;
// void armstrong(int num){
//     int rem;
//     while(i<=num){
//         rem = num%10;
//         num/=10;
//         i++;
//     }

// }

//Find trailing zeros
// #include<iostream>
// using namespace std;
// int countTrailingZeros(int num) {
//     int count = 0;
//     while (num >= 5) {
//         count += num / 5;
//         num /= 5;
//     }
//     return count;
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "The number of trailing zeros in " << n << "! is " << countTrailingZeros(n) << endl;
//     return 0;
// }
