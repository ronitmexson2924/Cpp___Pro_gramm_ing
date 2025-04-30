//Number - Base Conversions

// Decimal to binary
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem, ans = 0,mul = 1;
    while(num>0)
    {
        rem = num%2;
        num = num/2;
        ans += rem*mul;
        mul *=10;
    } 
    cout<<ans<<" ";   
    return 0;
}

//Binary to Decimal conversion
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a three digit binary number: ";
    cin>>num;
    int one_digit = num%10;
    int ten_digit = (num/10)%10;
    int hundred_digit = num/100;
    cout<<hundred_digit<<endl;
    cout<<ten_digit<<endl;
    cout<<one_digit<<endl;
// } 