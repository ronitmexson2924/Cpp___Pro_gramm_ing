#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Prevents overflow

        if (arr[mid] == key)
        {
            return mid; // Key found
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // Move to right half
        }
        else
        {
            end = mid - 1; // Move to left half
        }
    }
    return -1; // Key not found
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Static array (Valid in some C++ compilers like GCC)

    cout << "Enter sorted array elements: "; // Binary search needs sorted input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value of key: ";
    cin >> key;

    int result = BinarySearch(arr, n, key);
    if (result != -1)
        cout << "Key found at index: " << result << "\n";
    else
        cout << "Key not found.\n";

    return 0;
}
