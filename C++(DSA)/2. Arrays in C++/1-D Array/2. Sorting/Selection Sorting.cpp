// In this type of sorting we just have to select the least element and switch places with the existing one;
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {10, 4, 1, 3, 2, 7};
//     for(int i = 0; i < 5; i++){
//          int index = i;
//         for(int j = i+1; j<6; j++){
//             if(arr[j]<arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i = 0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Reverse the slection sorting
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {6, 3, 9, 1, 0, 4};
    for (int i = 5; i > 0; i--)
    {
        int index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}