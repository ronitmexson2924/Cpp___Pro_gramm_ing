//Pattern printing
#include <iostream>
using namespace std;
char a = 'a';
char sum;
int main(){
    for (int i = 1; i<=5; i++){
        for (int j = 0; j<=5; j++){
            sum = a + j-1;
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
}

//number printing
#include<iostream>
using namespace std;
int count = 1;
int main()
    
{
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=5; j++){
            
            cout<<count<<" ";
            count +=1;
        }
        cout<<endl;
    }
}