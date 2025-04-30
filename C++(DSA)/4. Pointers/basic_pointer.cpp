// #include<iostream>
// using namespace std;

// int main(){
//     int a = 15;
//     int *ptr = &a;
//     cout<<*ptr;
// }

//Use pointer to print an array
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int *ptr = &arr[0];
//     for(int i = 0; i < 6; i++){
//         cout<<*(arr+i)<<" ";
//     }
//     //Print the address 
//     for(int i = 0; i < 6; i++){
//         cout<<"\n"<<arr+i<<" ";
//     }
// }


//Pointers and functions
#include<iostream>
using namespace std;
void dob(int *ptr){
    for(int  i = 0; i < 5; i ++){
        ptr[i] = 2 * ptr[i];
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    dob(&arr[0]);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

}