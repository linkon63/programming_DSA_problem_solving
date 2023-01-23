// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        cout<<"Iteration Point:"<<i<<endl;
        printArray(arr, n);
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
        {

//            cout<<"***Before Swap"<<endl;
//            printArray(arr, n);
            if (arr[j] > arr[j + 1])
            {
                cout<<"***Swaping "<<arr[j]<<" and "<<arr[j + 1]<<endl;
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                cout<<"*Not Swaping "<<arr[j]<<" and "<<arr[j + 1]<<endl;
            }
            cout<<"After Swap"<<endl;
            printArray(arr, n);
        }

    }
}



// Driver code
int main()
{
    int arr[] = {7,2,13,2,11,4};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
// This code is contributed by rathbhupendra
