//Pattern Printing Part - II

//Right angle triangle
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++){
//         for(int j= 1; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

//Number pattern - 1
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++){
//         for(int j= 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Number printing - 2
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++){
//         for(int j= 1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

//Number pattern - 3
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++){
//         for(int j= 1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Number pattern - 4
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++){
//         for(int j= i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Alphabet pattern
// #include <iostream>
// using namespace std;

// int main()
// {
//     char a = 'a';  // Character 'a'
//     int i, j;  // Declare i and j before use

//     for (i = 1; i <= 5; i++)  // Corrected for loop syntax
//     {
//         char sum = a + (j-1);
//         for (j = 1; j <= i; j++)  // `j < i` to match expected pattern
//         {   // Move sum inside loop so j is defined
//             cout << sum << " ";
            
//         }
//         cout << endl;
//     }
// }


//Star pattern
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j<=5-(i-1); j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Last number pattern 
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5-(i-1); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}