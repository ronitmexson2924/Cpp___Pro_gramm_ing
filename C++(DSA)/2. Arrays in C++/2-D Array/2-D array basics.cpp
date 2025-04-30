// Matrix sum
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int row1, row2, col1, col2;
//     cout << "Enter the number of rows in matrix 1: ";
//     cin >> row1;
//     cout << "Enter the number of columns in matrix 1: ";
//     cin >> col1;

//     cout << "Enter the number of rows in matrix 2: ";
//     cin >> row2;
//     cout << "Enter the number of columns in matrix 2: ";
//     cin >> col2;

//     if (col1 == col2 && row1 == row2)
//     {
//         int arr1[row1][col1], arr2[row2][col2], arr3[row1][col2];

//         cout << "Enter the elements of first matrix:\n";
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col1; j++)
//             {
//                 cin >> arr1[i][j]; // Fixed the condition
//             }
//         }

//         cout << "Enter the elements of second matrix:\n";
//         for (int i = 0; i < row2; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 cin >> arr2[i][j]; // Fixed the array name
//             }
//         }

//         // Sum of matrices
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col1; j++)
//             {
//                 arr3[i][j] = arr1[i][j] + arr2[i][j];
//             }
//         }

//         // Printing the sum matrix
//         cout << "Sum of matrices:\n";
//         for (int i = 0; i < row1; i++)
//         {
//             for (int j = 0; j < col1; j++)
//             {
//                 cout << arr3[i][j] << " ";
//             }
//             cout << endl; // Proper formatting
//         }
//     }
//     else
//     {
//         cout << "The matrices cannot be added because their dimensions do not match.\n";
//     }

//     return 0;
// }

// Sum of a row and showing it's index
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row1, row2, col1, col2;
//     cout << "Enter the number of rows in matrix 1: ";
//     cin >> row1;
//     cout << "Enter the number of columns in matrix 1: ";
//     cin >> col1;

//     int arr1[row1][col1];

//     cout << "Enter the elements of first matrix:\n";
//     for (int i = 0; i < row1; i++)
//     {
//         for (int j = 0; j < col1; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }

//     int sum = 0;
//     for (int i = 0; i < row1; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             sum += arr1[i][j];
//             cout<<sum<<" ";
//             sum = 0;
//         }
//     }
// }

// Print sum of diagnal elements
// #include <iostream>
// using namespace std;

// int main()
// {
    // int row1, col1;
    // cout << "Enter the number of rows in array: ";
    // cin >> row1;
    // cout << "Enter the number of columns in array: ";
    // cin >> col1;

    // // Check if the matrix is square
    // if (row1 != col1)
    // {
    //     cout << "Error: The matrix must be square to compute diagonal sum.\n";
    //     return 1; // Exit the program
    // }

    // int arr1[row1][col1];

    // cout << "Enter the elements of the array:\n";
    // for (int i = 0; i < row1; i++)
    // {
    //     for (int j = 0; j < col1; j++) // Fix: j < col1
    //     {
    //         cin >> arr1[i][j];
    //     }
    // }

//     // Compute the sum of diagonal elements
//     int sum1 = 0;
//     for (int i = 0; i < row1; i++)
//     {
//         sum1 += arr1[i][i]; // Main diagonal elements
//     }

//     cout << "The sum of 1st diagonal elements is: " << sum1 << endl;

//     int sum2 = 0;
//     for (int i = 0; i < row1; i++)
//     {
//         sum2 += arr1[i][row1 - 1 - i];
//     }
//     cout << "The sum of 2nd diagonal elements is: " << sum2 << endl;
//     return 0;
// }

//Reverse each row of the matrix
#include<iostream>
using namespace std;

int main(){
    int row, col;
    
    cout << "Enter the number of rows in array: ";
    cin >> row;
    cout << "Enter the number of columns in array: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> arr[i][j];
        }
    }
    //reversing the elements
    for(int i = 0; i < row; i++){
        int start = 0; 
        int end = row - 1;
        while(start<end){
            swap(arr[start][end],arr[i][end]);
            start++; end--;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" "<<endl;
        }
    }
}