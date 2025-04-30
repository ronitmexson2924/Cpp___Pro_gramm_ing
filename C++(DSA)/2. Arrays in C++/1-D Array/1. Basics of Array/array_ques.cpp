// // 1. Searching element in an array
//  #include<iostream>
//  using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cout<<"Enter element number "<<i+1<<": ";
//         cin>>arr[i];
//     }
//     int num;
//     cout<<"Enter the number that you want to find: ";
//     cin>>num;
//     int count = 0;
//     for(int j = 0; j < n; j++){
//         if(arr[j] == num){
//             count++;
//         }
//     }
//     if(count == 1){
//         cout<<"The number is present";
//     }
//     else{
//         cout<<"The number is not present";
//     }

// }

// // 1.1 Kiddo's Logixx
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element number " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     int num;
//     cout << "Enter the number that you want to find: ";
//     cin >> num;
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == num)
//         {
//             cout << "The number is present";
//             break;
//         }
//         else
//         {
//             if (arr[j] == arr[-1])
//             {
//                 cout << "The number is not present";
//                 break;
//             }
//         }
//     }
// }

// // 2. Reversing an array
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Invalid size!" << endl;
//         return 1;
//     }

//     int *arr = new int[n];  // Dynamically allocate array
//     int *arr1 = new int[n]; // Reversed array

//     // Input elements
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element number " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // Reverse the array
//     for (int i = 0; i < n; i++)
//     {
//         arr1[i] = arr[n - i - 1]; // Correct indexing
//     }

//     // Print the reversed array
//     cout << "Reversed array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;

//     // Free allocated memory
//     delete[] arr;
//     delete[] arr1;

//     return 0;
// }

// 3. Second Largest Element of an array
#include <iostream>
using namespace std;

int maxElement(int n, int arr[])
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int secondLargest(int n, int arr[])
{
    int arr1[n];
    
    int max_element = maxElement(n, arr);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == max_element)
            {
                continue;
            }
            arr1[j] = arr[j];
    }
    int max_element_2 = maxElement(n,arr1);
    return max_element_2;
}

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The second largest element in the array is: "<<secondLargest(n, arr);
    return 0;
}

//4. Fibonacci Series
// #include<iostream>
// using namespace std;
// int Fibonacci(int num){
//     int i = 0;

// }
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(num<0){
//         cout<<"The fibonacci series does not exist";
//     }
//     else if(num == 0){
//         return 0;
//     }
//     else if(num == 1){
//         return 1;
//     }
//     else{
//         cout<<"The "<< num <<"th "<<"fibonacci term is: "<<Fibonacci(num);
//     }
// }

